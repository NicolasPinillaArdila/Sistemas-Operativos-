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
  
  /*Declaración del puntero q de tipo char, se inicializa en NULL*/
  char *q=NULL;
  /*Se muestra el mensaje: Se está por reservar espacio para la cadena "Goodbye"*/
  printf("Requesting space for \"Goodbye\"\n");
  /*Se reserva la memoria para el apuntador q del tamaño de la cadena "Goodbye" + 1*/
  q = (char *) malloc(strlen("Goodbye")+1);

  /*Verifica si falló la reserva de memoria y finaliza el programa mostrando el error*/
  if(!q){
    perror("Failed to allocate space because");
    exit(1);
  }

  /*Se muestra el mensaje: Se está por copiar la cadena "Goodbye" a la dirección de memoria de q*/
  printf("About to cpy\"Goodbye\"to q at address%s\n",q);
  /*Copia de la cadena "Goodbye" a la dirección de memoria de q*/
  strcpy(q,"Goodbye");
  /*Se muestra el mensaje: cadena copiada*/
  printf("String copied\n");
  /*Se muestra la cadena almacenada en q*/
  printf("%s\n",q);

  return 0;
}