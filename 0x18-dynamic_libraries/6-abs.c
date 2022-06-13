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
	if (n > 0)
		n = n * 1;
	else if (n < 0)
		n = n * -1;
	else
		n = n;
	return (n);
}
