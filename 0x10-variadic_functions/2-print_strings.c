#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str)
		{
			printf("%s", str);
			if (i != (n - 1))
			{
				if (separator == NULL)
					continue;
				else
					printf("%s", separator);
			}
		}
		else
			printf("(nil)");
	}
	va_end(ap);
	putchar('\n');
}
