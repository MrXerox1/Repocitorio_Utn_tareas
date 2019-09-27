/*
 * lib.h
 *
 *  Created on: 26 sep. 2019
 *      Author: alumno
 */

#ifndef LIB_H_
#define LIB_H_
#define QTY_TIPO 200
#define RETORNO_EXITOSO 0
#define ERROR -1
typedef struct {
	int idAsociado;
	char nombre[30];
	char apellido[30];
	int edad;
	int dni;
	int isEmpty;
} datosPersonales;
typedef struct {
	char idllamada[30];
	char motivo[50];//(infarto/gripe/acu)
	char estado[50]; //(pendiente/completo)
	int tiempo;
	int idAsociado;
	int isEmpty;
} Llamada;
int asociadoAlta(datosPersonales *array, int size, int* contadorID);
int asociadoBuscarEmpty(datosPersonales *array, int size, int* posicion);
#endif /* LIB_H_ */
