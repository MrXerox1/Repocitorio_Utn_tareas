/*
 * getNumero.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 10
#define MINIMO 5
#define REINTENTOS 2
#define RETORNO_EXITOSO 0
#define ERROR_UNO -1
int getNumero(int *resultado,int numeroMaximo, int numeroMinimo,int reintentos);
int main(void)
{
	int resultado;
		if(getNumero(&resultado,MAXIMO,MINIMO,REINTENTOS) == RETORNO_EXITOSO)
		{
			printf("el numero %d es correcto \n", resultado);
		}else{
			printf("ERROR, los numeros ingresados son incorrectos");
			return ERROR_UNO;
		}


}
int getNumero(int *resultado,int numeroMaximo,int numeroMinimo,int reintentos)
{

	int numero;

		for(;reintentos>=0;reintentos--)
		{
			printf("Ingrese un numero entre %d y %d \n",numeroMaximo,numeroMinimo);
			scanf("%d",&numero);
			if(numero >= numeroMinimo && numero <= numeroMaximo)
			{
				*resultado= numero;
				return RETORNO_EXITOSO;
			}else
			{
				printf("el numero indicado es incorrecto le quedan %d reintentos \n",reintentos);
			}
		}
	return ERROR_UNO;
}
