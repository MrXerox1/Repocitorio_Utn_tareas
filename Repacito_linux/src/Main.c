/*
 ============================================================================
 Name        : Repacito_linux.c
 Author      : sergio tirante
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "Controller.h"
#include "Computer.h"
#include "utn.h"



int main()
{
	int option;
	char nombreArchivo[30];
	char seguir = 'S';
	LinkedList *listaComputer = ll_newLinkedList();


	do
	{
		__fpurge(stdin);//fflush en windows
		printf(
				"----------------------------------------------------------------------------------\n");
		printf("01. Leer archivo de datos\n");
		printf("02. Ordenar lista generada.\n");
		printf("03. Listar el supuesto ordenamiento.\n");

		if (getInt(&option, "\tIngrese opcion: ", "\nError", 1, 6,
				CANT_REINTENTOS) == 0) {


			switch (option) {
			case 1:
				printf("ingrese nombre del archivo que desea cargar\n");
				scanf("%s",nombreArchivo);

				if(controller_loadFromText(nombreArchivo, listaComputer)==0){
					printf("no existe archivo con ese nombre");
				}

				break;
			case 2:

				controller_sortComputer(listaComputer);
				break;
			case 3:
				controller_ListComputer(listaComputer);
				break;
			}
		}

	} while (seguir == 'S');

	return EXIT_SUCCESS;
}
