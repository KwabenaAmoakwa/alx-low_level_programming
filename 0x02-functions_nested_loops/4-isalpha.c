#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if letter is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if the character is lowercase. 0 otherwise
 */
int _isalpha(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
return (0);
}
