#include "main.h"

/**
 * print_triangle - prints a triangle followed by a newline
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
int i, j, u;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
u = size - j - 1;
if (u > i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
