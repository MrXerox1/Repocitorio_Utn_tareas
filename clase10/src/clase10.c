/*
 ============================================================================
 Name        : Clase_08.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Pantalla.h"


int main(void)
{

	struct sPantalla aPantalla[1000];
	struct sPantalla bPantalla;
	int i;
	int idEmpleado = 0;
	char opcion;
	do{
		printf( "1. Alta\n"
				"2. Baja\n"
				"3. Modificacion\n"
				"4. Listado\n"
				"5. Ordenar\n"
				"6. Salir\n");



	}while(opcion!=6);




	for(i=0;i<3;i++){

		getString(bPantalla.nombre,"Ingrese el nombre",
				"ERROR", 1, 49, 2);

		getString(bPantalla.apellido,"Ingrese el apellido",
						"ERROR", 1, 49, 2);

		bPantalla.idEmpleado = idEmpleado;
		idEmpleado++;
		bPantalla.status = STATUS_NOT_EMPTY;

		aPantalla[i] = bPantalla;
	}
	imprimirArrayEmpleados(aPantalla,3);

	return EXIT_SUCCESS;
}
