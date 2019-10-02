/*
 * libreria_modelo _parcial.c
 *
 *  Created on: 30 sep. 2019
 *      Author: sergio
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "libreria_modelo_parcial.h"
int mostrarMenu(){
	int retorno = ERROR;
	printf("1. ALTA DEL ASOCIADO\n");
	printf("2. MODIFICAR DATOS DEL ASOCIADO\n");
	printf("3. BAJA DEL ASOCIADO\n");
	printf("4. NUEVA LLAMADA\n");
	printf("5. ASIGNAR AMBULANCIA\n");
	printf("6. INFORMAR:\n◦ El nombre y apellido del asociado con mas llamados\n◦ El o los motivo/s mas recurrente/s y su cantidad\n◦ El motivo que en promedio mas demora en ser resuelto\n");
	printf("7. SALIR\n");
	return retorno;
}
int asociado_Inicializar(datosPersonales asociado[], int size) {
	int retorno = -1;
	if (asociado != NULL && size > 0) {
		for (; size > 0; size--) {
			asociado[size - 1].isEmpty = 1;
		}
		retorno = 0;
	}
	return retorno;
}

int ingresoAsociado(int id) {
	int retorno = ERROR;
	datosPersonales asociado[50];


		printf("Ingrese el Nombre \n");
		fgets(asociado[id].nombre, sizeof(asociado[id].nombre), stdin);
		__fpurge(stdin);

		printf("\nIngrese el apellido \n");
		fgets(asociado[id].apellido, sizeof(asociado[id].apellido), stdin);
		__fpurge(stdin);

		printf("\nIngrese edad \n");
		scanf("%d", &asociado[id].edad);
		__fpurge(stdin);

		printf("\nIngrese numero de dni \n");
		scanf("%d", &asociado[id].dni);

		asociado[id].isEmpty = 1;

		printf("\nDatos Personales");
		printf("\n%s", asociado[id].nombre);
		printf("\n%s", asociado[id].apellido);
		printf("\n%d", asociado[id].edad);
		printf("\n%d", asociado[id].dni);
		retorno = RETORNO_EXITOSO;


	return retorno;
}
int asociadoBuscarEmpty(datosPersonales asociado[], int size, int *posicion) {
	int retorno = ERROR;
	int i;
	if (asociado != NULL && size >= 0 && posicion != NULL) {
		for (i = 0; i < size; i++) {
			if (asociado[i].isEmpty == 1) {
				retorno = RETORNO_EXITOSO;
				*posicion = i;
				break;
			}
		}
	}
	return retorno;
}
int asociadoAlta(datosPersonales asociado[], int size, int *contadorID) {
	int retorno = ERROR;
	int posicion;
	if (asociado != NULL && size > 0 && contadorID != NULL) {
		if (asociadoBuscarEmpty(asociado, size, &posicion) == ERROR) {
			printf("\nNo hay lugares vacios");
		} else {
			(*contadorID)++;
			asociado[posicion].idAsociado = *contadorID;
			asociado[posicion].isEmpty = 0;
			retorno = RETORNO_EXITOSO;
		}
	}
	return retorno;
}
