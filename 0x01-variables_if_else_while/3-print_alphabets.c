#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph[100] = "abcdefghijklmnopqrstuvwxyz";
char alph1[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char n = '\n';
int i;

for (i = 0; i < 26; i++)
{
putchar(alph[i]);
}
for (i = 0; i < 26; i++)
{
putchar(alph1[i]);
}
putchar(n);
return (0);
}
