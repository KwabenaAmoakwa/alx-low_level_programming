#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
if (i != j && i != k && k != j && i < j && i < k && j < k)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}

}
}
putchar('\n');
return (0);
}
