#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 */
void print_alphabet(void)
{
char save[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
_putchar(save[i]);
}
_putchar('\n');
return;
}
