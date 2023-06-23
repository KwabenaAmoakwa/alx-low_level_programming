#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 *
 * Returns: 1 if character is a digit
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}
