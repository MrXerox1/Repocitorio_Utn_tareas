/*
 * Computer.c
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Computer.h"
static int lastId=0;
Computer* computer_new()
{
    return (Computer*)malloc(sizeof(Computer));
}
int computer_delete(Computer* this)
{
    int ret=-1;
    if(this!=NULL)
    {
        free(this);
        ret=0;
    }
    return ret;
}
Computer* computer_newParametros(char* id,char* descripcion,char* precio, char *idtipo)
{
	Computer *retorno = NULL;
	Computer *this;
	this = computer_new();

	if(this != NULL)
	{
		if(computer_setIdStr(this,id) == EXIT_SUCCESS &&
				computer_setDescripcion(this,descripcion) == EXIT_SUCCESS &&
				computer_setPrecioStr(this,precio) == EXIT_SUCCESS &&
				computer_setIdtipoStr(this,idtipo) == EXIT_SUCCESS )
		{
				retorno = this;
		}
		else
		{
			printf("borre %s\n",id);
			computer_delete(this);
		}
	}

	return retorno;
}


void computer_idInit(int id)
{
    lastId=id+1;
}
int computer_idGenerator()
{
    return lastId++;
}
int computer_setIdStr(Computer* this,char* idStr)
{
    int ret=-1;
    int bufferId;
    if(this!=NULL && idStr!=NULL)
    {
        if(utn_isValidInt(idStr))
        {
            bufferId = atoi(idStr);
            if(!computer_setId(this,bufferId))
            {
                ret=0;
            }
        }
    }
    return ret;
}
int computer_setId(Computer* this,int id)
{
    int ret=-1;
    if(this!=NULL && id>=0)
    {
        this->id=id;
        ret=0;
    }
    return ret;
}
int computer_getId(Computer* this,int* id)
{
    int ret=-1;
    if(this!=NULL&&id!=NULL)
    {
        *id=this->id;
        ret=0;
    }
    return ret;
}

int computer_compareId(void* pElementA,void* pElementB)
{
    int ret = 0;
    if(((Computer*)pElementA)->id > ((Computer*)pElementB)->id)
    {
        ret = 1;
    }
    if(((Computer*)pElementA)->id < ((Computer*)pElementB)->id)
    {
        ret = -1;
    }
    return ret;
}
int computer_setDescripcion(Computer* this,char* descripcion)
{
    int ret=-1;
    if(this != NULL)
    {
        strncpy(this->descripcion,descripcion,sizeof(this->descripcion));
        ret=0;
    }
    return ret;
}
int computer_getDescripcion(Computer* this,char* descripcion)
{
    int ret=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strncpy(descripcion,this->descripcion,sizeof(this->descripcion));
        ret=0;
    }
    return ret;
}
int computer_compareDescripcion(void* pElementA,void* pElementB)
{
    int ret = 0;
    if(strcmp(((Computer*)pElementA)->descripcion,((Computer*)pElementB)->descripcion)>0)
    {
        ret = 1;
    }
    if(strcmp(((Computer*)pElementA)->descripcion,((Computer*)pElementB)->descripcion)<0)
    {
        ret = -1;
    }
    return ret;
}
int computer_setPrecioStr(Computer* this,char* precioStr)
{
    int ret=-1;
    int bufferPrecio;
    if(this!=NULL)
    {
        if(utn_isValidInt(precioStr))
        {
            bufferPrecio = atoi(precioStr);
            if(!computer_setPrecio(this,bufferPrecio))
            {
                ret=0;
            }
        }
    }
    return ret;
}
int computer_setPrecio(Computer* this,int precio)
{
    int ret=-1;
    if(this!=NULL && precio>=0)
    {
        this->precio=precio;
        ret=0;
    }
    return ret;
}
int computer_getPrecio(Computer* this,int* precio)
{
    int ret=-1;
    if(this!=NULL && precio!=NULL)
    {
        *precio=this->precio;
        ret=0;
    }
    return ret;
}
int computer_comparePrecio(void* pElementA,void* pElementB)
{
    int ret = 0;
    if(((Computer*)pElementA)->precio > ((Computer*)pElementB)->precio)
    {
        ret = 1;
    }
    if(((Computer*)pElementA)->precio < ((Computer*)pElementB)->precio)
    {
        ret = -1;
    }
    return ret;
}
int computer_setIdtipoStr(Computer* this,char* idtipoStr)
{
    int ret=-1;
    int bufferIdtipo;
    if(this!=NULL)
    {
        if(utn_isValidInt(idtipoStr))
        {
            bufferIdtipo = atoi(idtipoStr);
            if(!computer_setIdtipo(this,bufferIdtipo))
            {
                ret=0;
            }
        }
    }
    return ret;
}
int computer_setIdtipo(Computer* this,int idtipo)
{
    int ret=-1;
    if(this!=NULL && idtipo>=0)
    {
        this->idtipo=idtipo;
        ret=0;
    }
    return ret;
}
int computer_getIdtipo(Computer* this,int* idtipo)
{
    int ret=-1;
    if(this!=NULL && idtipo!=NULL)
    {
        *idtipo=this->idtipo;
        ret=0;
    }
    return ret;
}
int computer_compareIdtipo(void* pElementA,void* pElementB)
{
    int ret = 0;
    if(((Computer*)pElementA)->idtipo > ((Computer*)pElementB)->idtipo)
    {
        ret = 1;
    }
    if(((Computer*)pElementA)->idtipo < ((Computer*)pElementB)->idtipo)
    {
        ret = -1;
    }
    return ret;
}
int computer_setOferta(Computer* this,char* oferta)
{
    int ret=-1;
    if(this != NULL && utn_isValidName(oferta))
    {
        strncpy(this->oferta,oferta,sizeof(this->oferta));
        ret=0;
    }
    return ret;
}
int computer_getOferta(Computer* this,char* oferta)
{
    int ret=-1;
    if(this!=NULL && oferta!=NULL)
    {
        strncpy(oferta,this->oferta,sizeof(this->oferta));
        ret=0;
    }
    return ret;
}
int computer_compareOferta(void* pElementA,void* pElementB)
{
    int ret = 0;
    if(strcmp(((Computer*)pElementA)->oferta,((Computer*)pElementB)->oferta)>0)
    {
        ret = 1;
    }
    if(strcmp(((Computer*)pElementA)->oferta,((Computer*)pElementB)->oferta)<0)
    {
        ret = -1;
    }
    return ret;
}

int computer_ordenoPorIdTipo(void* pElementUno,void* pElementDos)
{
	int retorno = 0;

	if(((Computer*)pElementUno)->idtipo > ((Computer*)pElementDos)->idtipo)
	{
		retorno = 1;
	}
	if(((Computer*)pElementUno)->idtipo < ((Computer*)pElementDos)->idtipo)
	{
		retorno = -1;
	}

	return retorno;
}
