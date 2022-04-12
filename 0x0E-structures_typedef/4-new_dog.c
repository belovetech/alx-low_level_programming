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
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * * Return: newdog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int i, j, namelen, ownerlen;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	namelen = _strlen(name);
	newdog->name = malloc(namelen * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	ownerlen = _strlen(owner);
	newdog->owner = malloc(ownerlen * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (j = 0; i < ownerlen; j++)
		newdog->owner[i] = owner[j];

	return (newdog);
}











