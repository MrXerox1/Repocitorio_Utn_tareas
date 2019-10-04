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
	int contadorIdLllamada = 0;
	int retorno=ERROR;

	datosPersonales arrayAsociados[QTY_TIPO];
	Llamada llamada[QTY_TIPO];
	asociado_Inicializar(arrayAsociados, QTY_TIPO);

	do {
		mostrarMenu();
		printf("ingrese una opcion ");
		fflush(stdin);
		scanf("%d",&opcion);

		switch (opcion) {
		case 1: //Alta
			asociadoAlta(arrayAsociados, QTY_TIPO, &contadorIdAsociados);
			break;

		case 2:
			modificarPorId(arrayAsociados,QTY_TIPO);
			break;

		case 3:
			bajaAsociado(arrayAsociados, contadorIdAsociados);

			break;

		case 4:

			llamadaAlta(llamada,QTY_TIPO,&contadorIdLllamada,);
			break;

		case 5:
			break;

		case 6:
			listarAsociados(arrayAsociados,QTY_TIPO);
			listarLLamadas(llamada, QTY_TIPO);
			break;


		case 7:
			break;
		default:
			printf("\nOpcion no valida");
		}
	} while (opcion != 7);
	return retorno;
}
