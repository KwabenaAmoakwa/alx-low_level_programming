#include <stdio.h>
#include "main"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int u = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 5 == 0)
{
u = u + i;
}
}
printf("%d", u);
return;
}
