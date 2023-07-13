#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concatenate
 *
 * Return: concatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, b = 0, len = strlen(s2);

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	if (n < len)
	{
		len = strlen(s1) + n + 1;
		con = malloc(len * sizeof(char));
	}
	else
	{
		len = strlen(s1) + strlen(s2) + 1;
		con = malloc(len * sizeof(char));
	}
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (i < strlen(s1))
		{
			con[i] = s1[i];
		}
		else
		{
			con[i] = s2[b];
			b++;
		}
	}
	return (con);
}
