#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - multiply two numbers
* @argc: arguement count
* @argv: arguement vectors
*
* Return: Always 0 (succes)
*/

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{

		printf("Error\n");
		return (1);
	}

	exit(EXIT_SUCCESS);
}
