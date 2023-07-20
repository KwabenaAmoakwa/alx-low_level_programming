#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function to be
 * used to compare values
 *
 * Return: integer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	array = malloc(size);
	
	cmp(&array);
	return (array);
}
