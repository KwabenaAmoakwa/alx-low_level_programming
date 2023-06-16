#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alas[] = "zyxwvutsrqponmlkjihgfedcba";
char sp = '\n';
int i;

for (i = 0; i < 26; i++)
{
putchar(alas[i]);
}
putchar(sp);
return (0);
}
