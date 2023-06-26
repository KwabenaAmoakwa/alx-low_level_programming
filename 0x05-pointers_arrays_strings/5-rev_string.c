#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 */
void rev_string(char *s)
{
	int i, j;
	char sr;

	i = strlen(s) - 1;
	j = 0;

	while (j < i)
	{
		sr = s[i];
		s[i] = s[j];
		s[j] = sr;
		i--;
		j++;
	}
}
