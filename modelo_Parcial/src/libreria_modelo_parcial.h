/*
 * libreria_modelo_parcial.h
 *
 *  Created on: 30 sep. 2019
 *      Author: sergio
 */

#ifndef LIBRERIA_MODELO_PARCIAL_H_
#define LIBRERIA_MODELO_PARCIAL_H_
//cantida de arrays
#define QTY_TIPO 200
//retornos
#define RETORNO_EXITOSO 0
#define ERROR -1
//isEmpty
#define VACIO 0
#define LLENO 1
//estado ambulancia
#define PENDIENTE 0
#define CUMPLIDO 1
//motivos
#define ACV 1
#define GRIPE 2
#define INFARTO 3

typedef struct {
	int idAsociado;
	char nombre[30];
	char apellido[30];
	int edad;
	int dni;
	int isEmpty;
} datosPersonales;
typedef struct {
	int idllamada;
	int idAsociado;
	int idAmbulancia;
	int motivo;//(infarto/gripe/acu)
	int estado; //(pendiente/completo)
	int tiempo;
	int isEmpty;
} Llamada;
int asociadoBuscarID(datosPersonales array[], int size, int valorBuscado, int* posicion);
int asociado_Inicializar(datosPersonales asociado[], int size);
int asociadoBuscarEmpty(datosPersonales asociado[], int size, int *posicion);
int asociadoAlta(datosPersonales asociado[], int size, int *contadorID);
int ingresoAsociado(datosPersonales *asociado);
int mostrarMenu();
int listarAsociados(datosPersonales asociado[], int size);
int asociadoBuscarID(datosPersonales asociado[], int size, int valorBuscado, int* posicion);
int modificarPorId(datosPersonales asociado[],int contadorId);
int bajaAsociado(datosPersonales asociado[], int contadorId);

int ingresoLlamada(Llamada *llamada, int idAsociado);
int llamadaBuscarEmpty(Llamada llamada[], int size, int *posicion);
int listarLLamadas(Llamada llamada[], int size);
int llamadaAlta(Llamada ingreso[],int size,int *contadorId);





#endif /* LIBRERIA_MODELO_PARCIAL_H_ */
