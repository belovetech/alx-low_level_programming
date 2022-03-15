#include "main.h"

/**
* print_alphabet - writes alphabet from a-z
* @c -  character
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
