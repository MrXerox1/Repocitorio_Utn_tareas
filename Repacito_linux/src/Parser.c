/*
 * Parser.c
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */
#include <stdio.h>
#include <stdlib.h>
#include "Computer.h"
#include "utn.h"
#include "LinkedList.h"

/** \brief Parsea los datos los datos de los cachorros desde el archivo cachorros.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListComputer LinkedList*
 * \return int
 *
 */
int parser_ComputerFromText(FILE* pFile , LinkedList* pArrayListComputer)
{
	int retorno = EXIT_FAILURE;
	int contVar;
	char id[256];
	char descripcion[500];
	char precio[256];
	char idtipo[256];
	Computer* this;

	if (pFile != NULL && pArrayListComputer != NULL)
	{
		fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, descripcion, precio,
				idtipo);
		while (!feof(pFile)) {
			contVar = fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,
					descripcion, precio, idtipo);
			if (contVar == 4)
			{
				this = computer_newParametros(id, descripcion, precio, idtipo);
				if (this != NULL) {
					if (!ll_add(pArrayListComputer, this))
					{
						retorno = EXIT_SUCCESS;
					}
				}
			}
		}

	}
	return retorno;
}
