#include <stdio.h>
/**
* main - Print all numbers in base 10
*
* Return: Always (0) success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
