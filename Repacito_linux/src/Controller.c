/*
 * Controller.c
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */


#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "LinkedList.h"
#include "Controller.h"
#include "Computer.h"
#include "parser.h"

#define CRITERIO_ASCENDENTE 1
#define CRITERIO_DESCENDENTE 0


/** \brief Carga los datos de los cachorros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListComputerLinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListComputer)
{
    int retorno = EXIT_FAILURE;
    FILE* pFile;

    pFile = fopen(path,"r");
    if(pFile != NULL && pArrayListComputer != NULL)
    {
        if(ll_len(pArrayListComputer) == 0)
        {
            if(parser_ComputerFromText(pFile,pArrayListComputer)==EXIT_SUCCESS)
            {
                printf("\nCarga Exitosa. Tamaño linkedList %d\n",ll_len(pArrayListComputer));
                retorno=EXIT_SUCCESS;
            }
            else
            {
                printf("\nNo se pudo cargar el archivo.\n");
            }
        }
        else
        {
            printf("\nLa Lista ya se encuentra cargada.\n");
        }
    }

    fclose(pFile);

    return retorno;
}

int controller_sortComputer(LinkedList* pArrayListComputer)
{
   int retorno = EXIT_FAILURE;

    if(pArrayListComputer != NULL)
    {
        printf("\nEl proceso puede demorar unos segundos...\n");
        ll_sort(pArrayListComputer,computer_ordenoPorIdTipo,CRITERIO_ASCENDENTE);
        printf("\nProceso Terminado\n");


    }
    return retorno;

}

int controller_ListComputer(LinkedList* pArrayListComputer)
{
	int i;
	Computer* aux;

	if(pArrayListComputer!=NULL)
	{
		printf("\n%s %s %s %s %s \n","ID","DESCRIPCION","PRECIO","IDTIPO");
		for(i=0;i<ll_len(pArrayListComputer);i++)
		{
			aux = ll_get(pArrayListComputer,i);
			printf("%d %s %d %d \n",aux->id,aux->descripcion,aux->precio,aux->idtipo);
		}
	}
    return 1;
}




