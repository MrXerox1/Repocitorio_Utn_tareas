/*
 * libreria_modelo_parcial.h
 *
 *  Created on: 30 sep. 2019
 *      Author: sergio
 */

#ifndef LIBRERIA_MODELO_PARCIAL_H_
#define LIBRERIA_MODELO_PARCIAL_H_
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

int asociado_Inicializar(datosPersonales asociado[], int size);
int asociadoBuscarEmpty(datosPersonales asociado[], int size, int *posicion);
int asociadoAlta(datosPersonales asociado[], int size, int *contadorID);
int ingresoAsociado(int idAsociado);
int mostrarMenu();





#endif /* LIBRERIA_MODELO_PARCIAL_H_ */
