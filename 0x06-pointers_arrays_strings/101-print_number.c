#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 */
void print_number(int n)
{
	unsigned int s1;

	s1 = n;

	if (n < 0)
	{
		_putchar('-');
		s1 = -n;
	}

	if (s1 / 10 != 0)
	{
		print_number(s1 / 10);
	}
	_putchar('0' + (s1 % 10));
}
