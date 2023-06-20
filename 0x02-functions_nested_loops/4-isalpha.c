#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if character is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if the character is an alphabet. 0 otherwise
 */
int _isalpha(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else if (c > 96 && c < 123)
{
return (1);
}
return (0);
}
