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
  
  /*Declaración del puntero p de tipo char, se inicializa en NULL*/
  char *p=NULL;
  /*Declaración del puntero q de tipo char, se inicializa en NULL*/
  char *q=NULL;

  /*Reserva de memoria de 100 caracteres para el puntero p*/
  p = (char *) malloc(100*sizeof(char));
  /*Reserva de memoria de 100 caracteres para el puntero q*/
  q = (char *) malloc(100*sizeof(char));

  /*Se muestra la dirección de memoria a la que apunta p*/
  printf("Addresss of p=%s\n",p);
  
  /*copia la cadena en la memoria apuntada por p*/
  strcpy(p,"Hello,I'm the best in Operating Systems!!!");
  /*Se imprime la cadena almacenada en p*/
  printf("%s\n",p);
  
  /*Se muestra el mensaje: Se está por copiar la cadena a la dirección de memoria de q*/
  printf("About to copy \"Goodbye\" to q\n");
  /*Copia la cadena "Goodbye" en la memoria apuntada por q*/
  strcpy(q,"Goodbye");
  /*Se muestra el mensaje: cadena copiada*/
  printf("String copied\n");
  /*Imprime la cadena almacena en q*/
  printf("%s\n",q);

  free(p);
  free(q);

  return 0;
}