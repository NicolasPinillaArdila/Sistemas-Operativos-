#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Muestra el encabezado del programa
int printFunction();

// Calcula el índice de masa corporal
float imcFuncion(float masa, float altura);

// Imprime una matriz NxN
void impMatrix(int N, float mA[N][N]);

// Multiplica dos matrices NxN
void matrixMult(int N, float mA[N][N], float mB[N][N], float mC[N][N]);

// Llena dos matrices NxN con valores aleatorios
void llenarMatriz(int N, float mA[N][N], float mB[N][N]);

#endif