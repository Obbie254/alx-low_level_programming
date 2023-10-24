#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: input string
 * @b: constant byte for filling
 * @n: the length
 * Return: output string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		*(s + t) = b;
	return (s);
}
