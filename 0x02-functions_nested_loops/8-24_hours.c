#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
int p, i;

for (i = 0; i < 24; i++)
{
for (p = 0; p < 60; p++)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
_putchar(':');
_putchar('0' + (p / 10));
_putchar('0' + (p % 10));
_putchar('\n');
}
}
return;
}
