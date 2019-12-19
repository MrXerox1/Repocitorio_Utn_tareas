/*
 * Controller.h
 *
 *  Created on: 19 dic. 2019
 *      Author: sergio
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "LinkedList.h"

int controller_loadFromText(char* path , LinkedList* pArrayListComputer);
int controller_sortComputer(LinkedList* pArrayListComputer);
int controller_ListComputer(LinkedList* pArrayListComputer);

#endif /* CONTROLLER_H_ */
