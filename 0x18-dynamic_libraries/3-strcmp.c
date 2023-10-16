#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: 0 if strings are the same, 1 if s1 character
 * being compared has greater ASCII value, -1 if s1
 * character being compared has lesser ASCII value
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);

	for (i = 0; i <= len; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
