#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphnum[100] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(alphnum[i]);
}
putchar('\n');
return (0);
}
