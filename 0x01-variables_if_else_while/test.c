#include <stdio.h>

/**
* main - print combination of two digit
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			//if (i == 8 && i == 9)
			//	continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
