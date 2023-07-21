#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;
	va_list args;

	if (n == 0)
		return;
	i = (int)n;
	va_start(args, n);

	if (separator != NULL)
		s = (char *)separator;

	for (; i != 0; i--)
	{
		if (i != 1 && separator != NULL)
			printf("%s%s", va_arg(args, char *), s);
		else if (i != 1)
			printf("%s", va_arg(args, char *));
		else
			printf("%s\n", va_arg(args, char *));
	}
}
