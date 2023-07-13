#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of array
 *
 * Return: pointer to string
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *spl;

	if (nmemb == 0 || size == 0)
		return (NULL);

	spl = malloc(size * nmemb);

	if (spl == NULL)
		return (NULL);

	_memset(spl, 0, nmemb * size);

	return (spl);
}
