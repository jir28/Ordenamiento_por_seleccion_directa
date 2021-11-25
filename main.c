#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float intercambiar(float numeros[],int n_p){//Ordenamiento por seleccion directa
    for (int i = 0;i < (n_p-1);i++){
        int posmenor = i;
        float menor = numeros[i];
        for (int j = i + 1;j < n_p;j++){
            if (numeros[j] < menor){
                posmenor = j;
                menor = numeros[posmenor];
            }
        }
        numeros[posmenor] = numeros[i];
        numeros[i] = menor;
    }
    return 0;
}

void imprimir (float numeros[], int n_p){//Imprimir los numeros
    for (int i = 0;i < n_p;i++){
        printf("%.2f\n",numeros[i]);
    }
}
void generar(float numeros[],int n_p){ //Generar los numeros
    srand(time(NULL));
    for (int i = 0;i < n_p;i++){
        numeros[i] = rand() % 100/10.f;//Generamos los numeros
    }
}
int main() {
    int n_p=10;
    float numeros[n_p];
    generar(numeros,n_p);
    printf("Sin ordenador\n");
    imprimir(numeros,n_p);
    intercambiar(numeros,n_p);
    printf("Ordenados\n");
    imprimir(numeros,n_p);
    return 0;
}
