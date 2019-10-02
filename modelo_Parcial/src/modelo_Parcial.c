/*
 ============================================================================
 Name        : modelo_Parcial.c
 Author      : sergio tirante
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "libreria_modelo_parcial.h"
int main(void) {

	int opcion;
	int contadorIdAsociados = 0;
	int retorno=ERROR;

	datosPersonales arrayAsociados[QTY_TIPO];
	asociado_Inicializar(arrayAsociados, QTY_TIPO);

	do {
		mostrarMenu();
		printf("ingrese una opcion valida ");
		scanf("%d",&opcion);
		fflush(stdin);
		switch (opcion) {
		case 1: //Alta
			asociadoAlta(arrayAsociados, QTY_TIPO, &contadorIdAsociados);
			//cambiar
			ingresoAsociado(contadorIdAsociados);
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			break;


		case 7:
			break;
		default:
			printf("\nOpcion no valida");
		}
	} while (opcion != 7);
	return retorno;
}
