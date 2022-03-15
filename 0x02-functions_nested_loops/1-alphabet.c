#include "main.h"

/* print_alphabet prototype */
void print_alphabet(void);

/**
* main - check the code
*
* Return: Always 0 (success).
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - writes alphabet from a-z
* @c -  character
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
