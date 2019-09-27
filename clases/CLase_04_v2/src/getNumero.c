/*
 * getNumero.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define MAXIMO 10
#define MINIMO 5
#define REINTENTOS 2
#define MSG_INGRE "Ingrese un numero entero\n"
#define MSG_ERROR "el numero indicado es incorrecto \n"


int main(void)
{
	int resultadoEntero;
	//float resultadoDecimal;
		if(getNumeroEnteros(&resultadoEntero,MAXIMO,MINIMO,REINTENTOS,MSG_INGRE,MSG_ERROR) == RETORNO_EXITOSO)
		{
			printf("el numero %d es correcto \n", resultadoEntero);
		}else{
			printf("ERROR, los numeros ingresados son incorrectos");
			return ERROR_UNO;
		}
		/*if(getNumeroDecimales(&resultadoDecimal,MAXIMO,MINIMO,REINTENTOS) == RETORNO_EXITOSO)
				{
					printf("el numero %f  es correcto \n", resultadoDecimal);
				}else{
					printf("ERROR, los numeros ingresados son incorrectos");
					return ERROR_UNO;
				}
		*/


}
/*
float getNumeroDecimales(float *resultadoDecimal,float numeroMaximoDecimal,float numeroMinimoDecimal,float reintentosDecimal)
{

	float numero;
	float retorno= ERROR_UNO;
		for(;reintentosDecimal>=0;reintentosDecimal--)
		{
			printf("Ingrese un numero decimal entre %f  y %f  \n",numeroMaximoDecimal,numeroMinimoDecimal);
			scanf("%f ",&numero);
			if(numero >= numeroMinimoDecimal && numero <= numeroMaximoDecimal)
			{
				*resultadoDecimal= numero;
				retorno = RETORNO_EXITOSO;
				break;
			}else
			{
				printf("el numero indicado es incorrecto le quedan %f  reintentos \n",reintentosDecimal);

			}
		}
	return retorno;
}

*/
