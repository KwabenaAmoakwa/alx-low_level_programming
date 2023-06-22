#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times followed by a new line
 *
 */
void more_numbers(void)
{
int i, r;
for (i = 0; i < 10; i++)
{
for (r = 1; r < 15; r++)
{
_putchar('0' + i);
}
_putchar('\n');
}
return;
}
