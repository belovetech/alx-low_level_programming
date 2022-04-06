#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - calculates length of a string
* @str: string
*
* Return: length of the string
*/

int _strlen(char *str)
{
	int len = 1;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
*
* Return: pointer to a newly allocated memory
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, size, i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	size = len1 + len2;

	printf("Size of the %s and %s is: %d\n", s1,s2,size);
	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; j < (size + 1); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[j++];
	}
	return (ptr);
	free(ptr);
}











