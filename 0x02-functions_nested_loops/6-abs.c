#include <stdlib.h>
#include "main.h"

/**
* _abs - absolute value of an integer
* @n: integer
*
* Return: Always 0 (success)
*/

int _abs(int n)
{
	n = abs(n);

	_putchar(n);
	return (0);
}
