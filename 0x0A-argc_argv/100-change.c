#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int ch[] = {25, 10, 5, 2, 1};
	int rem, i, b = 0;

	rem = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (rem % ch[i] == 0)
		{
			b += rem / ch[i];
			printf("%d\n", b);
			break;
		}
		else if (rem > ch[i])
		{
			b += rem / ch[i];
			rem = rem % ch[i];
		}
	}
	return (0);
}
