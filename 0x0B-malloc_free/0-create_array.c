#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of array
* @c: specific character
*
* Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
	free(ptr);
}
