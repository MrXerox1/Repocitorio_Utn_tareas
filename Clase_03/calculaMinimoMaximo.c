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

int calcularMaximoyMinimo(CANT_NUM,&resultadoMaximo,&resultadoMinimo) == RETORNO_EXITOSO);
int main(void)
{
	int resultadoMaximo;
	int resultadoMinimo;
		if (calcularMaximoyMinimo(CANT_NUM,&resultadoMaximo,&resultadoMinimo) == RETORNO_EXITOSO){
			printf("el numero maximo es: %d y el numero minimo es: %d",resultadoMaximo,resultadoMinimo);
		}
		else{
			printf("intente de nuevo");
		}
	return 0;

}
int calcularMaximoyMinimo(int cantidadNumeros,int *resultadoMaximo,int *resultadoMinimo)
{
	int numero;
	int maximo;
	int minimo;
	int retorno = ERROR_UNO;
	int i;
	if(cantidadNumeros>0)
	{
		for(i = 0;i < cantidadNumeros;i++ && *resultadoMaximo != NULL && *resultadoMinimo != NULL)
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
		return retorno;
	}
	return RETORNO_EXITOSO;
}
