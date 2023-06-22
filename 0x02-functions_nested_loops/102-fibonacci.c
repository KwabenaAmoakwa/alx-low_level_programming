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

for (i = 0; i < 50; i++)
{
d = o + c;
o = c;
c = d;
printf("%lu", c);
if (i < 49)
{
	printf(", ");
}
}
printf("\n");
return (0);
}
