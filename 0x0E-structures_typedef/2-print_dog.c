#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct variable
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
	d->name == NULL ? printf("Name: %s\n", d->name = "(nil)") :
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	d->owner == NULL ? printf("Owner: %s\n", d->owner = "(nil)") :
		printf("Owner: %s\n", d->owner);
	}
}
