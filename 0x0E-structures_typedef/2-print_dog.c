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
		printf("Name: %s\n", (d->name != NULL && *(d)->name != '\0') ? d->owner : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Name: %s\n", (d->owner != NULL && *(d)->owner != '\0') ? d->owner : "(nil)");
	}

}
