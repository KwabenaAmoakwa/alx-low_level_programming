#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int len, len1;

	len = strlen(name);
	len1 = strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (len + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (len1 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
