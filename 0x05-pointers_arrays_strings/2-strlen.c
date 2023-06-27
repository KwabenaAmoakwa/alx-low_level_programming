#include "main.h"
#include <string.h>

/**
 *_strlen - returns lenght of a string
 * @s: string whos length is to be returned
 *
 *Return: 0 always
 *
 */
int _strlen(char *s)
{
	int x, y;

	y = 0;
	while (s[y] != '\0')
	{
		y++;
		x += 1;
	}
	return (x);
}
