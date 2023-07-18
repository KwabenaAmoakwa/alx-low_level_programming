#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Return: new struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
