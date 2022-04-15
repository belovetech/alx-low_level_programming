#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the paramters
 * @n: number of unknown arguements
 * ...: unknown arguements
 *
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;	/* Declaring type for iterating args */
	unsigned int i;
	int sum = 0;

	va_start(ap, n);	/* Initialize the arg list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);	/* Get the next arg value */
	}
	va_end(ap);	/* Clean up */
	return (sum);
}
