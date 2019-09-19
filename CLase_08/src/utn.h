/*
 * utn.h
 *
 *  Created on: 11 sep. 2019
 *      Author: alumno
 */

#ifndef UTN_H_
#define UTN_H_
#define RETORNO_EXITOSO 0
#define ERROR_UNO -1

struct datosPersonales{
	char nombre[20];
	int dni;
	int edad;
	int isEmpty;
};

int getString(char mensaje, char *input);


int getIntArray(int *pResultado, char *pMensaje, char *pMensajeError,
		int minimo, int maximo, int reintentos);

void mostrarMenu();

int buscarLibre(struct datosPersonales vector,int tamano);

#endif /* UTN_H_ */
