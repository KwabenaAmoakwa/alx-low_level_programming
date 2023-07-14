#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer allocated by malloc
 * @old_size: size allocated by malloc function
 * @new_size: size to be allocated by realloc
 *
 * Return: new pointer to memory with new size
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *stl1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!stl1)
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (stl1);
}
