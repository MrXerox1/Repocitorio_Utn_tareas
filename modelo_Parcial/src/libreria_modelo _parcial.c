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
#include "biblioteca_sergio.h"
#define MENSAJE "ingrese id "
#define MENSAJE_ERROR "error ese id no es valido "
#define MINIMO 0
#define REINTENTOS 2

int mostrarMenu() {
	int retorno = ERROR;
	printf("\n1. ALTA DEL ASOCIADO\n");
	printf("2. MODIFICAR DATOS DEL ASOCIADO\n");
	printf("3. BAJA DEL ASOCIADO\n");
	printf("4. NUEVA LLAMADA\n");
	printf("5. ASIGNAR AMBULANCIA\n");
	printf(
			"6. INFORMAR:\n◦ El nombre y apellido del asociado con mas llamados\n◦ El o los motivo/s mas recurrente/s y su cantidad\n◦ El motivo que en promedio mas demora en ser resuelto\n");
	printf("7. SALIR\n");
	return retorno;
}

int asociado_Inicializar(datosPersonales asociado[], int size) {
	int retorno = -1;
	if (asociado != NULL && size > 0) {
		for (; size > 0; size--) {
			asociado[size - 1].isEmpty = VACIO;
		}
		retorno = 0;
	}
	return retorno;
}

int ingresoAsociado(datosPersonales *asociado) {
	int retorno = ERROR;

	datosPersonales aux;
	__fpurge(stdin);
	printf("Ingrese el Nombre \n");
	__fpurge(stdin);
	fgets(aux.nombre, sizeof(aux.nombre), stdin);
	__fpurge(stdin);

	printf("\nIngrese el apellido \n");
	fgets(aux.apellido, sizeof(aux.apellido), stdin);
	__fpurge(stdin);

	printf("\nIngrese edad \n");
	scanf("%d", &aux.edad);
	__fpurge(stdin);

	printf("\nIngrese numero de dni \n");
	__fpurge(stdin);
	scanf("%d", &aux.dni);

	printf("\nDatos Personales");
	printf("\n%s", aux.nombre);
	printf("\n%s", aux.apellido);
	printf("\n%d", aux.edad);
	printf("\n%d", aux.dni);
	printf("\n%d", aux.idAsociado);
	*asociado=aux;

	retorno = RETORNO_EXITOSO;

	return retorno;
}

int asociadoAlta(datosPersonales *asociado, int size, int *contadorID) {
	int retorno = ERROR;
	int posicion;
	if (asociado != NULL && size > 0 && contadorID != NULL) {
		if (asociadoBuscarEmpty(asociado, size, &posicion) == ERROR) {
			printf("\nNo hay lugares vacios");
		} else {
			(*contadorID)++;
			printf("aca estoy dentro de asociados %d",*contadorID);
			asociado[posicion].idAsociado = *contadorID;
			asociado[posicion].isEmpty = LLENO;
			ingresoAsociado(&asociado[posicion]);
			printf("aca estoy dentro de asociados %d",*contadorID);
			/*__fpurge(stdin);
				printf("Ingrese el Nombre \n");
				__fpurge(stdin);
				fgets(asociado[posicion].nombre, sizeof(asociado[posicion].nombre), stdin);
				__fpurge(stdin);

				printf("\nIngrese el apellido \n");
				fgets(asociado[posicion].apellido, sizeof(asociado[posicion].apellido), stdin);
				__fpurge(stdin);

				printf("\nIngrese edad \n");
				scanf("%d", &asociado[posicion].edad);
				__fpurge(stdin);

				printf("\nIngrese numero de dni \n");
				__fpurge(stdin);
				scanf("%d", &asociado[posicion].dni);

				printf("\nDatos Personales");
				printf("\n%s", asociado[posicion].nombre);
				printf("\n%s", asociado[posicion].apellido);
				printf("\n%d", asociado[posicion].edad);
				printf("\n%d", asociado[posicion].dni);
				printf("\n%d", asociado[posicion].idAsociado);
				*/
			retorno = RETORNO_EXITOSO;
		}
	}
	return retorno;
}

int asociadoBuscarEmpty(datosPersonales asociado[], int size, int *posicion) {
	int retorno = ERROR;
	int i;
	if (asociado != NULL && size >= 0 && posicion != NULL) {
		for (i = 0; i < size; i++) {
			if (asociado[i].isEmpty == VACIO) {
				retorno = RETORNO_EXITOSO;
				*posicion = i;
				break;
			}
		}
	}
	return retorno;
}

int asociadoBuscarID(datosPersonales asociado[], int size, int valorBuscado,
		int *posicion) {
	int retorno = ERROR;
	int i;
	if (asociado != NULL && size >= 0) {
		for (i = 0; i < size; i++) {
			if (asociado[i].isEmpty == VACIO)
				continue;
			else if (asociado[i].idAsociado == valorBuscado) {
				retorno = 0;
				*posicion = i;
				break;
			}
		}
	}
	return retorno;
}

int modificarPorId(datosPersonales asociado[], int contadorId) {
	int retorno = ERROR;
	int id;
	char salir = 'n';
	int indice;
	int opcion;
	__fpurge(stdin);;
	if (getInt(&id, contadorId, MINIMO, REINTENTOS, MENSAJE, MENSAJE_ERROR)
			== 0) {
		if (asociadoBuscarID(asociado, contadorId, id, &indice)==0) {

			do {
				printf("\nElegir opcion a modificar");
				printf("\n1)Nombre %s", asociado[indice].nombre);
				printf("\n2)Apellido %s", asociado[indice].apellido);
				printf("\n3)Edad %d", asociado[indice].edad);
				printf("\n4)DNI %d", asociado[indice].dni);
				printf("\n5)SALIR\n");
				__fpurge(stdin);;
				scanf("%d", &opcion);
				__fpurge(stdin);;
				switch (opcion) {
				case 1:
					__fpurge(stdin);
					printf("Ingrese el Nombre \n");
					__fpurge(stdin);
					fgets(asociado[indice].nombre,
							sizeof(asociado[indice].nombre),
							stdin);
					break;
				case 2:
					printf("\nIngrese el apellido \n");
					fgets(asociado[indice].apellido,
							sizeof(asociado[indice].apellido),
							stdin);

					break;
					__fpurge(stdin);

					printf("\nIngrese edad \n");
					scanf("%d", &asociado[indice].edad);
					break;
				case 3:
					__fpurge(stdin);

					printf("\nIngrese edad \n");
					scanf("%d", &asociado[indice].edad);
					break;

				case 4:
					printf("\nIngrese numero de dni \n");
					__fpurge(stdin);
					scanf("%d", &asociado[indice].dni);
					break;

				case 5:
					printf("esta seguro de que quiere salir? s/n");
					scanf("%s", &salir);
					break;
				default:
					printf("\nOpcion no valida");
				}
			}while(salir != 'n');
		}else{
			printf("error al modificar");
		}
	}

	return retorno;
}

int listarAsociados(datosPersonales asociado[], int size)
{
    int retorno=ERROR;
    int i;
    if(asociado!=NULL && size>=0)
    {
        for(i=0;i<size;i++)
        {
            if(asociado[i].isEmpty==LLENO)
                continue;
            else
            printf("\n %s apellido \n %s nombre \n %d dni \n %d edad \n %d id",asociado[i].apellido,asociado[i].nombre,asociado[i].dni,asociado[i].edad,asociado[i].idAsociado);
         }
        retorno=RETORNO_EXITOSO;
    }
    return retorno;
}
