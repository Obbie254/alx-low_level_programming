#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - fxn that searches for an integer
 * @array: array to into
 * @size: len of array
 * @cmp: fxn used to compare values
 *
 * Return: index of first element for which cmp fxn does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
