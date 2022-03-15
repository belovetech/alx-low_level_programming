#include "main.h"

/**
* print_alphabet_x10 - writes a-z in 10 lines
*/

void print_alphabet_x10(void)
{
	char i, c;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
