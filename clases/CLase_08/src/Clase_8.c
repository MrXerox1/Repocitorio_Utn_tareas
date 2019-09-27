/*
 * Clase_8.c
 *
 *  Created on: 18 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"




int main(){
	int opciones;
	int retorno = ERROR_UNO;
	char confirmacion;
	int i=0;
	struct datosPersonales alta[5];

	buscarLibre(alta[0],5);
	do{
		mostrarMenu();
			printf("elija una opcion \n");
			scanf("%d",&opciones);
		switch(opciones)
		{
		case 1:// dar de alta
			__fpurge(stdin);
			printf("\nIngrese nombre ");
			fgets(alta[i].nombre, sizeof(alta[i].nombre), stdin);
			__fpurge(stdin);
			printf("\nIngrese dni");
			scanf("%d", &alta[i].dni);
			__fpurge(stdin);
			printf("\nIngrese edad");
			scanf("%d", &alta[i].edad);
			__fpurge(stdin);
			i++;
			break;
		case 2://dar de baja
			break;
		case 3://modificar
			break;
		case 4://listar
		    for(i=0;i< 5;i++){
		       // printf("\n Nombre: %s ", alta[i].nombre);
		       // printf("\nDni: %d ", alta[i].dni);
		        //printf("\nEdad: %d ", alta[i].edad);
		        printf("\nesta vacio: %d ", alta[i].isEmpty);
		        __fpurge(stdin);
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

    return retorno;
}
