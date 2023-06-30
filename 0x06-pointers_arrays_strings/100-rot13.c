#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @c: string
 *
 * Return: an encoded string
 *
 */
char *rot13(char *c)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot1[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len = strlen(c);
	int len1 = strlen(alph);
	int i, k;

for (i = 0; i < len; i++)
{
for (k = 0; k < len1; k++)
{
if (c[i] == alph[k])
{
c[i] = rot1[k];
break;
}
}
}
return (c);
}
