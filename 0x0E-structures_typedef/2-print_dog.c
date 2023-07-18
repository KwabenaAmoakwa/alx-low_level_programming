#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct variable
 *
 */
void print_dog(struct dog *d)
{
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)\n") : printf("Name: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Name: %s\n", d->owner);
}
