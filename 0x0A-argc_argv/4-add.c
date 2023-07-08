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
	int i, j = 0, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	if (atoi(argv[i]) == 0)
	{
	j = 1;
	break;
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
