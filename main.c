#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"  // Declaraciones de las funciones que usaremos

int main(int argc, char *argv[]){
    // Verifica que el usuario pase los argumentos necesarios:
    // altura (m), masa corporal (kg) y tamaño de la matriz N
    if(argc < 4){
        printf("Uso: %s altura masa N\n", argv[0]);
        return 1; // Salir si no se pasan argumentos suficientes
    }

    srand(time(NULL)); // Inicializa la semilla de números aleatorios

    // Conversión de argumentos de cadena a valores numéricos
    float altura = atof(argv[1]);        // Altura en metros
    float masacorporal = atof(argv[2]);  // Masa en kilogramos
    int N = atoi(argv[3]);               // Tamaño de la matriz cuadrada

    // Declaración de matrices de tamaño NxN (matrices de punto flotante)
    float m1[N][N], m2[N][N], mC[N][N];

    // Muestra el título del programa
    printFunction();

    // Calcula y muestra el índice de masa corporal (IMC)
    float valorIMC = imcFuncion(masacorporal, altura);
    printf("El índice de masa corporal es %.2f\n\n", valorIMC);

    // Encabezado para la parte de matrices
    printf("****\n");
    printf("*      MATRICES      *\n");
    printf("****\n");

    // Llena las matrices m1 y m2 con valores aleatorios
    llenarMatriz(N, m1, m2);

    // Muestra la primera matriz
    printf("Matriz 1:\n");
    impMatrix(N, m1);

    // Muestra la segunda matriz
    printf("Matriz 2:\n");
    impMatrix(N, m2);

    // Multiplica las matrices m1 y m2, almacenando el resultado en mC
    matrixMult(N, m1, m2, mC);

    // Muestra la matriz resultante
    printf("Matriz C = M1 x M2:\n");
    impMatrix(N, mC);

    return 0; // Fin del programa
}