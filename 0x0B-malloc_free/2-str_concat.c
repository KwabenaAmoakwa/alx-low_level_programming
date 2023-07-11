#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2) + 1;

	c = (char *) malloc(len * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
	{
		if (i < strlen(s1))
		{
		c[i] = s1[i];
		}
		else
		{
			c[i] = s2[i - strlen(s1)];
		}
	}
	return (c);
}
