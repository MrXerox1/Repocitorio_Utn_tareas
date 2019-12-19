/*
 * Computer.h
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */

#ifndef Computer_H_INCLUDED
#define Computer_H_INCLUDED

#include "LinkedList.h"
#include "utn.h"

#define CANT_CARACTERES 128


typedef struct
{
    int id;
        char descripcion[500];
        int precio;
        int idtipo;
        char oferta[128];
}Computer;

Computer* computer_newParametros(char* id,char* descripcion,char* precio, char *idtipo);
void computer_idInit(int id);
int computer_idGenerator();
Computer* computer_new();
int computer_delete(Computer* this);
int computer_setIdStr(Computer* this,char* idStr);
int computer_setId(Computer* this,int id);
int computer_getId(Computer* this,int* id);
int computer_compareId(void* pComputerA,void* pComputerB);
int computer_setDescripcion(Computer* this,char* computer);
int computer_getDescripcion(Computer* this,char* computer);
int computer_setPrecioStr(Computer* this,char* precioStr);
int computer_setPrecio(Computer* this,int precio);
int computer_getPrecio(Computer* this,int* precio);
int computer_comparePrecio(void* pComputerA,void* pComputerB);
int computer_setIdtipoStr(Computer* this,char* idtipoStr);
int computer_setIdtipo(Computer* this,int idtipo);
int computer_getIdtipo(Computer* this,int* idtipo);
int computer_compareIdtipo(void* pComputerA,void* pComputerB);
int computer_setOferta(Computer* this,char* computer);
int computer_getOferta(Computer* this,char* computer);
int computer_ordenoPorIdTipo(void* pElementUno,void* pElementDos);
#endif
