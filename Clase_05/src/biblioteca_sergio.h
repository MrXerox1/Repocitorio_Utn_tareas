/*
 * biblioteca_sergio.h
 *
 *  Created on: 4 sep. 2019
 *      Author: alumno
 */

#ifndef BIBLIOTECA_SERGIO_H_
#define BIBLIOTECA_SERGIO_H_

#define RETORNO_EXITOSO 0
#define ERROR_UNO -1
int getInt(int *resultado,int maximo,int minimo,int reintentos,char* mensaje, char* mensajeError);
int initArrayInt(int *pArray , int limite, int valor);


#endif /* BIBLIOTECA_SERGIO_H_ */
