#include "main.h"

/**
* print_sign - check if a number is a positive, negative or 0;
* @n: number
*
* Return: 1 (positive), 0 (zero) and -1 (negative)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
