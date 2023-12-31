#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * count - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to a string
 */
char **strtow(char *str)
{
	char **sptl, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	sptl = (char **) malloc(sizeof(char *) * (words + 1));
	if (sptl == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				sptl[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	sptl[k] = NULL;

	return (sptl);
}
