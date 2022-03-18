#include "main.h"

/**
* print_line - draws a line
* @n: number of time
*/

void print_line(int n)
{
	char line = '_';
	int i = 0;

	if ((n != 0) && !(n < 0))
	{
		while (i < n)
		{
		_putchar(line);
		i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
