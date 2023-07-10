#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of data type
 * @c: character that stores malloc
 *
 * Return: array of chars
 *
 */
char *create_array(unsigned int size, char c)
{
	c = malloc(sizeof(char));
	free(c);
}
