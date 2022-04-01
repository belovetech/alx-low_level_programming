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
	printf("%d\n", argc);
	
	(void)argv;
	exit(EXIT_SUCCESS);
}
