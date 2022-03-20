#include <stdio.h>
/**
* main - prints number from 1 - 100
* for multiple of 3, it prints Fizz
* for multiple of 5, it prints Buzz
* for multiple of 3 and 5, it prints FizzBuzz
*
* Return: Always 0 (success)
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
			printf("%d", i);
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz");
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		printf(" ");
	}
	printf("\n");

	return (0);
}
