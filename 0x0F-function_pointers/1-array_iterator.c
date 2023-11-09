#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes fxn given as a parameter on each of array element
 * @array: the array
 * @size: array size
 * @action: fxn as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || size < 1 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
