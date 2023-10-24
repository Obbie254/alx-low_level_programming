#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: output string
 * @src: input string
 * @n: length of string
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		*(dest + t) = *(src + t);
	return (dest);
}
