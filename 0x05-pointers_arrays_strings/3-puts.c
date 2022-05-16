#include "main.h"
#include <stdio.h>

/**
* _puts - Write to the standard output
* @str: string
*
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));
	putchar('\n');
}

