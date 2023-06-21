#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: number to be checked
 *
 * Return: 1 if the character is has positive sign. 0 otherwise
 */
int print_sign(int n)
{
char sig;
if (n > 0)
{
sig = '+';
_putchar(sig);
return (1);
}
else if (n == 0)
{
sig = '0';
_putchar(sig);
return (0);
}
sig = '-';
_putchar(sig);
return (-1);
}
