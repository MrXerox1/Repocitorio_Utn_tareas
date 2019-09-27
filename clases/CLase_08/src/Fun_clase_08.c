/*
 * Fun_clase_08.c
 *
 *  Created on: 18 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

void mostrarMenu(){
	printf("1) Alta \n");
	printf("2) Baja \n");
	printf("3) Modificar \n");
	printf("4) Listar \n");
	printf("5) Ordenar \n");
	printf("6) Salir \n");
}
int buscarLibre(struct datosPersonales vector,int tamano){
	int retorno = ERROR_UNO;
	int i;
	for(i=0;i<tamano;i++){
		if(vector.isEmpty != 0){
			vector.isEmpty = 0;
		}
	}

	return retorno;
}
