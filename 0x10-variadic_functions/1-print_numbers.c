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
int a = (int)n;
va_list args;
char *s;

if (a == 0)
	return;
va_start(args, n);
if (separator != NULL)
	s = (char *)separator;
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
}
