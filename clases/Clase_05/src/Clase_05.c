/*
 ============================================================================
 Name        : Clase_05.c
 Author      : Sergio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "biblioteca_sergio.h"
#define CANT_NUMEROS 5
#define INDICE 00
#define MAX 100
#define MIN -100
#define REINTENTOS 2
#define MENSAJE "ingrese un numero\n"
#define MENSAJE_ERORR "ERROR, reingrese un numero \n"

int main(void)
{
	int numero[CANT_NUMEROS];
	int numeroMaximo;
	int numeroMinimo;
	int promedio;
	if(initArrayInt(numero,CANT_NUMEROS,INDICE)==RETORNO_EXITOSO){
		if(getArrayInt(numero,CANT_NUMEROS,MAX,MIN,REINTENTOS,MENSAJE,MENSAJE_ERORR)==RETORNO_EXITOSO)
			{

			}
	}
	if(getMaximoMinimo(numero,CANT_NUMEROS,&numeroMaximo,&numeroMinimo)==RETORNO_EXITOSO){
		printf("numero maximo es: %d\n numero minimo es: %d \n",numeroMaximo,numeroMinimo);
	}
	if(getPromedio(numero, CANT_NUMEROS,&promedio)==0)
	{
		printf("el promedio es: %d\n",promedio);
	}
	if(ordenarArrays(&numero,CANT_NUMEROS)==0){

	}
}
