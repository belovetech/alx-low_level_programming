#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - count the arguments of the program
* @argc: arguement count
* @argv: arguement vectors
*
* Return: Always 0 (succes)
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);

	(void)argv;
	exit(EXIT_SUCCESS);
}
