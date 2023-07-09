#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, p, j = 0, sum = 0, len;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	len = strlen(argv[i]);

	if (len == 1 && *argv[i] > 96 && *argv[i] < 123)
	{
	j = 1;
	break;
	}
	else if (len > 1)
	{
		for (p = 0; p < len; p++)
		{
			if (argv[i][p] > 96 && argv[i][p] < 123)
			{
				j = 1;
				break;
			}
		}
	}
	sum += atoi(argv[i]);
	}
	if (j == 1)
	{
	printf("Error\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	}
	return (0);
}
