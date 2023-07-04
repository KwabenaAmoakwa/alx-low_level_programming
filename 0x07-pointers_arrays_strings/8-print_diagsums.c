#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i, c, d;

	c = 0;
	d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i * size + i];
		d += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", c, d);
}
