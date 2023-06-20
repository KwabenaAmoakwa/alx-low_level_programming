#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 */
void print_alphabet_x10(void)
{
char save[] = "abcdefghijklmnopqrstuvwxyz";
int u, i;

for (u = 0; u < 10; u++)
{
for (i = 0; i < 26; i++)
{
_putchar(save[i]);
}
_putchar('\n');
}
return;
}
