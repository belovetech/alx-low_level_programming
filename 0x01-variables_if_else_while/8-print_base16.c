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
		putchar(i + '0');
	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar('\n');

	return (0);

}
