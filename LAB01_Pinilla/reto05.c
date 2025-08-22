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
  
  /*Declara un puntero a int (ptr) y tres variables enteras: i, n1 y n2*/
  int *ptr,i,n1,n2;
  /*Se muestra el mensaje: Ingrese el tamaño*/
  printf("Enter size:");
  /*Se lee el tamaño*/
  scanf("%d",&n1);
  /*Reserva memoria para un arreglo de n2 enteros y se guarda en ptr*/
  ptr=(int*)malloc(n2*sizeof(int));
  /*Se verifica si la memoria se reservó correctamente*/
  printf("Addresses of previously allocated memory:");
  /*Se muestra las direcciones de memoria reservadas*/
  for(i=0;i<n1;i++)
    printf("\n\np=%p\n",ptr+i);
  /*Se muestra el mensaje: Ingrese el nuevo tamaño*/
  printf("\n Enter the new size:");
  /*Se lee el nuevo tamaño*/
  scanf("%d",&n2);
  //rellocating the memory
  ptr=realloc(ptr,n2*sizeof(int));
  /*Se verifica si la memoria se reservó correctamente*/
  printf("Addresses of newly allocated memory:");
  /*Se muestra las direcciones de memoria reservadas*/
  for(i=0;i<n2;++i)
    printf("\n\np=%p\n",ptr+i);
  
  /*Se libera la memoria reservada para el apuntador ptr*/
  free(ptr);
}