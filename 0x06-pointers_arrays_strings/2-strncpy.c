#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, cahr *src, int n)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
