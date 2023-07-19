#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function you need to use
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
}