/*
 ============================================================================
 Name        : clase_07.c
 Author      : Sergio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MENSAJE "ingrese un numero /n"

int main(void)
{
	char input[50];
	int numero;
	int lenght;
	int i;

	printf("ingrese un numero \n");
	fgets(input,sizeof(input),stdin);

	printf("input 1: %d\n",input[0]);
	printf("input 2: %d\n",input[1]);

	lenght = strlen(input);

	printf("A%d\n",lenght);

	for(i=0;i<lenght;i++)
	{
		if(!(input[i] >='0' && input[i] <= '9'))
		{
			printf("error");
		}else{
			numero= atoi(input);
						printf("%d \n",numero);
		}

	}
}
