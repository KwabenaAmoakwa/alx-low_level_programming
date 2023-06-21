#include "main.h"
/**
 * times_table - prints multiplication table from 1 to 9
 *
 * Return: last digit of a number
 */
void times_table(void)
{
int a, b, s;

for (a = 0; a < 13; a++)
{
for (b = 0; b < 13; b++)
{
s = a * b;
_putchar('0' + s);
_putchar(',');
_putchar(' '); 
}
_putchar('\n')
}
return;
}
