#include "main.h"

/* Declaraction of print_putchar function */
void print_putchar(void);

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	print_putchar();
	return (0);
}

/**
* print_putchar - writes _putchar string to the stdout
*/
void print_putchar(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
