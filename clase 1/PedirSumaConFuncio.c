/*
 * PedirSumaConFuncio.c
 *
 *  Created on: 22 ago. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdlib.h>
int Sumar(int* resultado);

int main(void)
{
	int resultado;
	if (Sumar(&resultado) == 0){
		printf("El resultado es: %d",resultado);
	}else
	{
		printf("Error");
	}
	return 0;
}
int Sumar(int* resultado)
{
	int numero1;
	int numero2;
	printf("Numero 1: \n");
	scanf("%d",&numero1);
	printf("Numero 2: \n");
	scanf("%d",&numero2);
	*resultado=numero1+numero2;
	return 0;
}
