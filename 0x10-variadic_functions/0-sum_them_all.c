#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list arg;
	int a = (int)n;

	va_start(arg, n);

	for (; a != 0; a--)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
