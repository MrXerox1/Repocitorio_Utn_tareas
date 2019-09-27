/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int getNumeroEnteros(int *resultadoEntero,int numeroMaximoEntero,int numeroMinimoEntero,int reintentosEntero,char* ingreso, char* erorr)
{

	int numero;
	int retorno= ERROR_UNO;
		for(;reintentosEntero>=0;reintentosEntero--)
		{
			printf("%s",ingreso);
			scanf("%d",&numero);
			if(numero >= numeroMinimoEntero && numero <= numeroMaximoEntero)
			{
				*resultadoEntero= numero;
				retorno = RETORNO_EXITOSO;
				break;
			}else
			{
				printf("%s",erorr);

			}
		}
	return retorno;
}
