#include "main.h"
#include <unistd.h>

/**
 *_strlen - returns lenght of a string
 * @s: string whos length is to be returned
 *
 *Return: 0 always
 *
 */
int _strlen(char *s)
{
int y;

y = 0;
while (s[y] != '\0')
{
y++;
}
return (y);
}
