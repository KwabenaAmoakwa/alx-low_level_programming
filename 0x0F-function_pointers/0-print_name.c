#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
	}
	f(name);
}