#include "main.h"

/**
* print_line - draws a line
* @n: number of time
*/

void print_line(int n)
{
	char line = 45;

	if (n <= 0)
		_putchar('\n');
	else
		_putchar((char)n * line + '0');
}
