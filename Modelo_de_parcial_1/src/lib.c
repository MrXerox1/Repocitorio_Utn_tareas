/*
 * lib.c
 *
 *  Created on: 26 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "lib.h"

int altaAsociado()
{
	int retorno = ERROR;
	int i;
	datosPersonales asociado[50];

	for (i = 0; i < 2; i++)
	{
		printf("Ingrese el Nombre ");
		fgets(asociado[i].nombre, sizeof(asociado[i].nombre), stdin);
		__fpurge(stdin);

		printf("\nIngrese el apellido ");
		fgets(asociado[i].nombre, sizeof(asociado[i].nombre), stdin);
		__fpurge(stdin);

		printf("\nIngrese edad ");
		scanf("%d", &asociado[i].edad);
		__fpurge(stdin);

		printf("\nIngrese numero de dni ");
		scanf("%d", &asociado[i].dni);

		printf("\nDatos Personales");
		printf("\n%s", asociado[i].nombre);
		printf("\n%s", asociado[i].apellido);
		printf("\n%d", asociado[i].edad);
		printf("\n%d", asociado[i].dni);
		retorno = RETORNO_EXITOSO;
	}

	return retorno;
}
int asociadoBuscarEmpty(datosPersonales array[], int size, int *posicion)
{
	int retorno = ERROR;
	int i;
	if (array != NULL && size >= 0 && posicion != NULL) {
		for (i = 0; i < size; i++) {
			if (array[i].isEmpty == 1) {
				retorno = RETORNO_EXITOSO;
				*posicion = i;
				break;
			}
		}
	}
	return retorno;
}
int asociadoAlta(datosPersonales array[], int size, int *contadorID)
{
	int retorno = ERROR;
	int posicion;
	if (array != NULL && size > 0 && contadorID != NULL) {
		if (asociadoBuscarEmpty(array, size, &posicion) == ERROR)
		{
			printf("\nNo hay lugares vacios");
		} else {
			(*contadorID)++;
			array[posicion].idAsociado = *contadorID;
			array[posicion].isEmpty = 0;
			retorno = RETORNO_EXITOSO;
		}
	}
	return retorno;
}
