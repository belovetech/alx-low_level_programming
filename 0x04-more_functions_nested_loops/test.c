#include "stdio.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		for (j = 0; j <= 50; j++)
		{
			if (j >= 10)
			
		
			putchar((j / 10) + '0'); 
			putchar((j % 10) + '0');
		}

		putchar('\n');
	}
}
