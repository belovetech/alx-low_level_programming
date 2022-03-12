#include <stdio.h>

/**
* main - print all the numbers in hexadecimal
*
* Return: Always (0) success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((char)i % 10 + '0');
	}
	for (i = 'a'; i <= 'f'; i++;
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
