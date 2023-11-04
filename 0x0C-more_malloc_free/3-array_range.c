#include "main.h"
#include <stdlib.h>

/**
 * array_range - fxn that creates an array of integers
 * @min: lowest int
 * @max: highest int
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	unsigned int i, len;
	int *p;

	len = (max - min) + 1;
	if (min > max)
		return (NULL);
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
