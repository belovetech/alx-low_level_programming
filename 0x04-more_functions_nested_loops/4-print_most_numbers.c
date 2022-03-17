#include "main.h"

/**
* print_numbers - print numbers from 0-9
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) && (i == 4))
		{
			continue;
		}
		else
		{
			_putchar((char)i % 10 + '0');
			i++;
		}

	}
	_putchar('\n');
}
