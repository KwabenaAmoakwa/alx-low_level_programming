#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
int len, i;

len = 0;
while (str[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
	_putchar(str[i]);

}
_putchar('\n');
}
