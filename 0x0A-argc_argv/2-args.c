#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - print the name of the program
* @argc: arguement count
* @argv: arguement vectors
*
* Return: Always 0 (succes)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	
	exit(EXIT_SUCCESS);
}
