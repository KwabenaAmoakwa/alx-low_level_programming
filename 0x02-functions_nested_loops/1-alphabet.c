#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
alphabet();
return (0);
}
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
return (0);
}
