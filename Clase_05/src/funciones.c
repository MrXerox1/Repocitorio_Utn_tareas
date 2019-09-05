/*
 * funciones.c
 *
 *  Created on: 4 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "biblioteca_sergio.h"

int getInt(int *resultado,int maximo,int minimo,int reintentos,char* mensaje, char* mensajeError)
{
	int numero;
	int retorno= ERROR_UNO;
	do
	{
		printf("%s",mensaje);
		if(scanf("%d",&numero)==1 && numero >= minimo && numero <= maximo)
		{
			*resultado = numero;
			retorno = 0;
			break;
		}
		printf("%s",mensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorno;
}
int initArrayInt(int *pArray , int limite, int valor)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			pArray[i]=valor;
		}
		retorno = 0;
	}
	return retorno;
}
