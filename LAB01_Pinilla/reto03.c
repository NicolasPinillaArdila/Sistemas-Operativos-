/*************************************************************
*                Pontificia Universidad Javeriana
*      =========================*=======================
\
* Autor: Nicolás Pinilla, estudiante
* Materia: Sistemas Operativos
* Docente: J. Corredor, PhD
* Temas: Memoria Dinámica

**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  /*Declaración del puntero ptr de tipo entero*/
  int *ptr;
  /*Se reserva la memoria para el apuntador ptr*/
  ptr=malloc(15*sizeof(*ptr)); /*a block of 15 integers*/

  /*Si ptr no es NULL, asigna el número 480 al sexto elemento, luego lo muestra en pantalla*/
  if(ptr!=NULL){
    *(ptr+5)=480; 
    printf("Valor de ptr[5]: %d\n",*(ptr+5));
  }

  return 0;
}