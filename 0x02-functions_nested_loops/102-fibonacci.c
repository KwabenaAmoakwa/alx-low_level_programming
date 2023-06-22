#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long c, d, o;

c = 1;
o = 0;
printf("%lu\n", o);
printf("%lu\n", c);
for (i = 0; i <= 48; i++)
{
d = o + c;
o = c;
c = d;
printf("%lu\n", c);
}
return (0);
}
