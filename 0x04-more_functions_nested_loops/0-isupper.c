#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c > 64 && c < 94)
{
return (1);
}
return (0);
}
