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
	int retorno = ERROR_UNO;
	char confirmacion;
	int opciones;
	int i;
	int idEmpleado = 0;
	do{
			mostrarMenu();
				printf("elija una opcion \n");
				scanf("%d",&opciones);
			switch(opciones)
			{
			case 1:
				break;
			case 2://dar de baja
				break;
			case 3://modificar
				break;
			case 4://listar
			    for(i=0;i< 5;i++){
			    }
				break;
			case 5://ordenar

				break;
			case 6:
				printf("\nEsta seguro que quiere salir? (s/n) \n");
				__fpurge(stdin);
				scanf("%c",&confirmacion);
				break;
			default:
				printf("error ingreso incorrecto");
				break;
						}
						__fpurge(stdin);
						retorno=RETORNO_EXITOSO;
				}while(confirmacion != 's');




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
