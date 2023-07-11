#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be returned
 *
 * Return: array of chars
 *
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int i, len;

	len = strlen(str) + 1;

	c = (char *) malloc(len * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		c[i] = str[i];
	return (c);
}
