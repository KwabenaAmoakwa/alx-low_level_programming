#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes of second string to be concatenated
 *
 * Return: concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	if (len2 < n)
	{
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
return (dest);
}
for (i = 0; i < n; i++)
{
dest[len1 + i] = src[i];
}
return (dest);
}
