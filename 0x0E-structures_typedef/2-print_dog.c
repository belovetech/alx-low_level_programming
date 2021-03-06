#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);

		if (d->age == '\0')
			printf("Age: %f\n", (float)0);
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}

