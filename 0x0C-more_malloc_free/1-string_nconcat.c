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
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s2);
	if (n < len)
	{
		len = strlen(s1) + n + 1;
		con = (char *) malloc(len * sizeof(char));
	}
	else
	{
		len = strlen(s1) + strlen(s2) + 1;
		con = (char *) malloc(len * sizeof(char));
	}
	if (con == NULL)
		return (NULL);
	for (i = 0; i < len - 1; i++)
	{
		if (i < strlen(s1))
		{
			con[i] = s1[i];
		}
		else
		{
			con[i] = s2[i - strlen(s1)];
		}
	}
	con[len - 1] = '\0';
	return (con);
}
