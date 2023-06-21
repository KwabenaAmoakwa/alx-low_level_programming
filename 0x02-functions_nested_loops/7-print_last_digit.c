#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @c: number to be checked
 *
 * Return: last digit of a number
 */
int print_last_digit(int c)
{
int u;
if (c >= 0)
{
u = c % 10;
_putchar('0' + u);
return (u);
}
c = c * -1;
u = c % 10;
_putchar('0' + u);
return (u);
}
