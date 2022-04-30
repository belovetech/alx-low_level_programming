#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int i, sum = 0;
	int n = 1024;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * sum_mul_of_3_and_5 - prints sum of multiplr of 3 and 5
 * @num: below the number
 * Return: void
 */

void sum_mul_of_3_and_5(int num)
{
	int i, sum = 0;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum  += i;
	}
	printf("%d\n", sum);
}

