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

int main(int argc, char *argv[])
{
	int ch[] = {25, 10, 5, 2, 1};
	int rem, i, b = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	rem = atoi(argv[1]);
	if (rem < 0)
        {
                printf("Error\n");
                return (1);
        }
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
