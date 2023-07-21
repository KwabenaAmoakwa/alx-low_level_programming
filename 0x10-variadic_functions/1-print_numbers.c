#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed
 * by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int a;
va_list args;
char *s;

if (n == 0)
	return;
a = (int)n;
s = (char *)separator;
va_start(args, n);

for (; a != 0; a--)
{
	if (a != 1 && separator != NULL)
	{
	printf("%d%s", va_arg(args, int), s);
	}
	else if (a != 1)
	{
		printf("%d", va_arg(args, int));
	}
	else
	{
		printf("%d\n", va_arg(args, int));
	}
}
va_end(args);
}
