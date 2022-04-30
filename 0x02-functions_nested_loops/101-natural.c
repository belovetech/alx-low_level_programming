#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int i, sum = 0;
	int n = 1024;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
		else if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}

	printf("%d \n", sum);
	return (0);
}

