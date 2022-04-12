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
		printf("Name: %s\n", (d->name)? d->name : "(nil)");
		printf("Name: %f\n", (d->age)? d->age : 0);
		printf("Name: %s\n", (d->owner)? d->owner : "(nil)");
	}

}
