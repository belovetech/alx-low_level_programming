#include <stdio.h>


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		switch (i)
		{
			case (i % 3 == 0 && i % 5 == 0):
				printf("FizzBuzz");
				break;
			case (i % 3 == 0):
				printf("Fizz");
				break;
			case (i % 5 == 0):
				printf("Buzz");
				break;
			default:
				printf("%d", i);
				break;
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
