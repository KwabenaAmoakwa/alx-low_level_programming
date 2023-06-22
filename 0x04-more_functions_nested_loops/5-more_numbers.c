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
for (r = 0; r < 15; r++)
{
if (r < 10)
{
_putchar('0' + r);
}
else if (r > 10)
{
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
}
_putchar('\n');
}
return;
}
