#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2D array
 * @height: length of 2D array
 *
 * Return: int pointer
 *
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int i, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	n = (int **) malloc(height * sizeof(int *));
	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = (int *)malloc(width * sizeof(int));
			if (n[i] == NULL)
			{
				for (b = 0; b < i; b++)
					free(n[b]);
				free(n);
				return (NULL);
			}
		for (b = 0; b < width; b++)
			n[i][b] = 0;
	}
	return (n);
}
