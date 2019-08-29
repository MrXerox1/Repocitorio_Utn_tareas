/*
 * calculaMinimoMaximo.c
 *
 *  Created on: 28 ago. 2019
 *      Author: sergio
 */
#include <stdio.h>
#include <stdlib.h>
#define CANT_NUM 5
#define RETORNO_EXITOSO 0
#define ERROR_UNO -1
int calcularMaximoyMinimo(int cantidadIntentos,int *resultadoMaximo,int *resultadoMinimo);
int main(void)
{
	int resultadoMaximo;
	int resultadoMinimo;
		if (calcularMaximoyMinimo(CANT_NUM,&resultadoMaximo,&resultadoMinimo) == RETORNO_EXITOSO){
			printf("el numero maximo es: %d y el numero minimo es: %d",resultadoMaximo,resultadoMinimo);
			return RETORNO_EXITOSO;
		}
		else{
			printf("intente de nuevo");
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
