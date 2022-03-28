#include <stdlib.h>
#include "stdio.h"


/**
* _abs - absolute value of an integer
* @n: integer
*
* Return: Always 0 (success)
*/

int _abs(int n)
{
	if ( n > 0)
		n = n * 1;
	else if (n < 0)
		n = n * -1;
	else 
		n = n;
	return (n);
}

int main(void)
{
	    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);

	return (0);
}
