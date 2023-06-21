#include "main.h"
/**
 * _abs - prints absolute value of integer
 * @c: number to be checked
 *
 * Return: absolute value of number 
 */
int _abs(int c)
{
	
int u;
if (c > 0)
{
return (c);
}
else if (c == 0)
{
return (0);
}
u = -1 * c;
return (u);
}
