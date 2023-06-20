#include "main.h"
/**
 * alphabet - prints alphabets
 *
 */
void alphabet(void)
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
