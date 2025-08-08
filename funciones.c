#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

// Imprime el título del programa
int printFunction(){
    printf("****\n");
    printf("* Calculadora de Masa Corporal *\n");
    printf("****\n");
    return 0;
}

// Calcula el índice de masa corporal (IMC)
float imcFuncion(float masa, float altura){
    return masa / (altura * altura);
}

// Imprime en pantalla una matriz de tamaño NxN con dos decimales
void impMatrix(int N, float mA[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%6.2f ", mA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Realiza la multiplicación de dos matrices NxN y guarda el resultado en mC
void matrixMult(int N, float mA[N][N], float mB[N][N], float mC[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            mC[i][j] = 0; // Inicializa la celda
            for(int k=0; k<N; k++){
                mC[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }
}

// Llena dos matrices NxN con valores aleatorios en el rango [0, 12.0)
void llenarMatriz(int N, float mA[N][N], float mB[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            mA[i][j] = (rand() % 100) * 0.121; // Número aleatorio con decimal
            mB[i][j] = (rand() % 100) * 0.121;
        }
    }
}