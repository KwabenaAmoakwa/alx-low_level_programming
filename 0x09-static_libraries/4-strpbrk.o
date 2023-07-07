#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int u;

		while (*s)
		{
			for (u = 0; accept[u]; u++)
			{
			if (*s == accept[u])
			return (s);
			}
		s++;
		}

	return ('\0');
}
