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
  
  /*Se declaran las variables: n,i, un puntero de tipo int y sum inicializado en 0*/
  int n,i,*ptr,sum=0;
  /*Se muestra el mensaje: Ingrese el número de elementos*/
  printf("Enter number of elements:");
  /*Se lee el número de elementos*/
  scanf("%d",&n);
  /*Se reserva la memoria para el apuntador ptr*/
  ptr=(int*)malloc(n*sizeof(int));
  /*Se verifica si ptr es NULL después del malloc, si es así, muestra un error y termina el programa*/
  if(ptr==NULL){
    printf("Error! memory not allocated.");
    exit(0);
  }
  
  /*Se leen los elementos y se suman*/
  for(i=0;i<n;i++){
    /*Se muestra el mensaje: Ingrese los elementos*/
    printf("Enter elements:");
    scanf("%d",ptr+i);
    sum+=*(ptr+i);
  }
  /*Se muestra la suma de los elementos previamente realizada*/
  printf("Sum=%d",sum);
  /*Se libera la memoria reservada para el apuntador ptr*/
  free(ptr);
  
  return 0;
}