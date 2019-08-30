/*
 * PedirNumerosConLimitesDecimales.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

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

