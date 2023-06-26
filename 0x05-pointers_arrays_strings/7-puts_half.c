#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be used
 *
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
	for (i = (len / 2); i < len; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
		for (i = ((len - 1) / 2); i < len - 1; i++)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}

