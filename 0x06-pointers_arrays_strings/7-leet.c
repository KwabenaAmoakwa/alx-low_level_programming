#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @c: string
 *
 * Return: an encoded string
 *
 */
char *leet(char *c)
{
	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char num[] = "43071";
	int len = strlen(c);
	int len1 = strlen(low);
	int i, k;

	for (i = 0; i < len; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			for (k = 0; k < len1; k++)
			{
				if (c[i] == low[k])
				{
					c[i] = num[k];
				}
			}
		}
		else if (c[i] > 64 && c[i] < 91)
		{
			for (k = 0; k < len1; k++)
			{
				if (c[i] == upp[k])
				{
					c[i] = num[k];
				}
			}
		}
	}
	return (c);
}
