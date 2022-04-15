#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers, folowed by a new line
 * @separator: string to be printed between number
 * @n: number of integers passed to the function
 * @...: last parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1))
		{
			if (separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
