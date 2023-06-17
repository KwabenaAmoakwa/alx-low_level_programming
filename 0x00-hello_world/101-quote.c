#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *i
 * Return: Always 0 (Success)
 */
int main(void)
{
char sti[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, sti, strlen(sti));
return (1);
}
