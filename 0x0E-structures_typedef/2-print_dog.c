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
		d = malloc(sizeof(struct dog));
	}
	else
	{
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}