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
	printf("%s\n", argv[0]);

	(void)argc;

	exit(EXIT_SUCCESS);
}
