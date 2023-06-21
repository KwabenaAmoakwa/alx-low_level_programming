#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 *@n: number to be checked
 *
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(",");
printf(" ");
}
}
putchar('\n');
return;
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(",");
printf(" ");
}
}
putchar('\n');
return;
}
printf("98\n");
return;
}
