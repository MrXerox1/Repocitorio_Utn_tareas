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
int getString(char mensaje, char *input);

int getIntArray(int *pResultado, char *pMensaje, char *pMensajeError,
		int minimo, int maximo, int reintentos);

int utn_esNumerica(char input[]);

int initArrayInt(int *pArray, int limite, int valor);

int printArrayInt(int *pArray, int limite);

int getArrayInt(int *pArray, int limite, char *pMensaje, char *pMensajeError,
		int minimo, int maximo, int reintentos);

int minMaxArrayInt(int *pArray, int limite, int *minimo, int *maximo);

int sumaArrayInt(int *pArray, int limite, int *resultado);

int promedioArrayInt(int *pArray, int limite, int *resultadoProm);

int OrdenaArrayInt(int *pArray, int limite);

int getInt(int *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos);

#endif /* UTN_H_ */
