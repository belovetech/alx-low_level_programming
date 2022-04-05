#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplictates string
* @str: string
*
* Return: pointer to the new string
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 1;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
	free(ptr);
}


