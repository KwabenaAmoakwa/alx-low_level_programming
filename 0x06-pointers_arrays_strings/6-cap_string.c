#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @c: string
 *
 * Return: capitalized string
 *
 */
char *cap_string(char *c)
{
	char seps[] = "\t \n,;.!?(){}\"";
	int len = strlen(c);
	int len1 = strlen(seps);
	int i, b;

	for (i = 0; i < len; i++)
	{
		if (i != len - 1)
		{
		for (b = 0; b < len1; b++)
		{
			if ((c[i] == seps[b]) && (c[i + 1] > 96 && c[i + 1] < 123))
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
	}
}
return (c);
}
