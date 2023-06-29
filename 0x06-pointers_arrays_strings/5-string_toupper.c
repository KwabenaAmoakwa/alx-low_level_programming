#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: new string
 */
char *string_toupper(char *c)
{
int i;
int len = strlen(c);

for (i = 0; i < len; i++)
{
	if (c[i] < 123 && c[i] > 96)
	{
	c[i] = c[i] - 32;
	}
}
return (c);
}
