#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 *
 * Returns: 1 if character is a digit
 */
int _isdigit(int c)
{
if (c < 58 && c > 47)
{
return (1);
}
return (0);
}
