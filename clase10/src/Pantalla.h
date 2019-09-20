/*
 * Empleado.h
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_

#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

struct sPantalla
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};
int initLugarLibreEmpleado(struct sPantalla *aArray, int cantidad);

int imprimirArrayEmpleados(struct sPantalla *aEmpleado, int cantidad);
int ordenarArrayEmpleados(struct sPantalla *aEmpleado, int cantidad);

int buscarLugarLibreEmpleado(struct sPantalla *aArray, int cantidad);
int buscarEmpleadoPorId(struct sPantalla *aArray, int cantidad,int id);
int bajaEmpleadoPorId(struct sPantalla *aArray, int cantidad,int id);
int modificarEmpleadoPorId(struct sPantalla *aArray, int cantidad,struct sPantalla empleado);
int altaEmpleadoPorId(struct sPantalla *aArray, int cantidad,struct sPantalla empleado);


#endif /* PANTALLA_H_ */
