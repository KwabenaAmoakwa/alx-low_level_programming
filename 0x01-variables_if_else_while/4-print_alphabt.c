#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph[100] = "abcdfghijklmnoprstuvwxyz";
char n = '\n';
int i;

for (i = 0; i < 24; i++)
{
putchar(alph[i]);
}
putchar(n);
return (0);
}
