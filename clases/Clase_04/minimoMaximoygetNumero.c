/*
 * minimoMaximoygetNumero.c
 *
 *  Created on: 29 ago. 2019
 *      Author: Sergio
 */
#include <stdio.h>
#include <stdlib.h>
#define CANT_NUM 5
#define MAXIMO 10
#define MINIMO 5
#define REINTENTOS 2
#define RETORNO_EXITOSO 0
#define ERROR_UNO -1
int calcularMaximoyMinimo(int cantidadIntentos,int *resultadoMaximo,int *resultadoMinimo);
int getNumero(int *resultado,int numeroMaximo, int numeroMinimo,int reintentos);
int main(void)
{
	int resultadoMaximo;
	int resultadoMinimo;
	int resultado;
		if (calcularMaximoyMinimo(CANT_NUM,&resultadoMaximo,&resultadoMinimo) == RETORNO_EXITOSO){
			printf("el numero maximo es: %d y el numero minimo es: %d \n",resultadoMaximo,resultadoMinimo);
		}else{
			return ERROR_UNO;
		}
		if(getNumero(&resultado,MAXIMO,MINIMO,REINTENTOS) == RETORNO_EXITOSO)
		{
			printf("el numero %d es correcto \n", resultado);
		}else{
			printf("ERROR, los numeros ingresados son incorrectos");
			return ERROR_UNO;
		}


}
int calcularMaximoyMinimo(int cantidadIntentos,int *resultadoMaximo,int *resultadoMinimo)
{
	int numero;
	int maximo;
	int minimo;
	int i;
	if (cantidadIntentos > 0){
		for(i = 0;i < cantidadIntentos;i++)
		{
			printf("ingrese un numero: \n");
			scanf("%d",&numero);
			if(i== 0 || numero > maximo)
			{
				maximo = numero;
			}
			if(i == 0 || numero < minimo  )
			{
				minimo=numero;
			}
		}
		*resultadoMinimo=minimo;
		*resultadoMaximo=maximo;
		return RETORNO_EXITOSO;
	}else
	{
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
