#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: variable
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
