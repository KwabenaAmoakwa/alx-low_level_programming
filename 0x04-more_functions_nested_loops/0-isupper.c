#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase
 */
int _isupper(int c)
{
if (c > 64 && c < 94)
{
return (1);
}
return (0);
}
