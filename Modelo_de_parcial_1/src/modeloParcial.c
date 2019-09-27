/*
 ============================================================================
 Name        : Modelo_de_parcial_1.c
 Author      : Sergio
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "lib.h"

int main() {
	int opcion;
	int contadorIdAsociados = 0;

	datosPersonales arrayAsociados[QTY_TIPO];
	pantalla_Inicializar(arrayAsociados, QTY_TIPO);

	do {
		switch (opcion) {
		case 1: //Alta
			asociadoAlta(arrayAsociados, QTY_TIPO, &contadorIdAsociados);
			//cambiar
			break;

		case 2:
			break;

		case 3:
			pantalla_baja(arrayAsociados, QTY_TIPO);
			break;

		case 4:                   //Listar pantalla
			pantalla_listar(arrayAsociados, QTY_TIPO);
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
	return;
	return retorno;
}
