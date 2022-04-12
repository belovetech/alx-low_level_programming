#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds string length
 * @str: string
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
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int nameLen, ownerLen;

	if (name != NULL && owner != NULL)
	{
		nameLen = _strlen(name) + 1;
		ownerLen = _strlen(owner) + 1;
		newdog = malloc(sizeof(dog_t));

		if (newdog == NULL)
			return (NULL);

		newdog->name = malloc(sizeof(char) * nameLen);

		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}

		newdog->owner = malloc(sizeof(char) * ownerLen);

		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}

		newdog->name = _strcpy(newdog->name, name);
		newdog->owner = _strcpy(newdog->owner, owner);
		newdog->age = age;
	}

	return (newdog);
}




