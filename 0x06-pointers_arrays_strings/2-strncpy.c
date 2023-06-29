#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number of bytes of second string to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
