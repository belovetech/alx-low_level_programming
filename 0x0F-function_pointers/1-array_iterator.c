#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: array of integers
 * @size: size of array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

