#include "main.h"
/**
 * times_table - prints multiplication table from 1 to 9
 *
 * Return: last digit of a number
 */
void times_table(void)
{
int a, b, c, d, e;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
e = a * b;
if (e > 9)
{
d = e % 10;
c = (e - d) / 10;
_putchar(44);
_putchar(32);
_putchar('0' + c);
_putchar('0' + d);
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar('0' + e);
}
}
_putchar('\n');
}
}
