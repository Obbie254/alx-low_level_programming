#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * binary_to_uint - fxn that converts a binary num to unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number or 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i;

	if (b != 0 || b != 1 || b == NULL)
		return (0);
	for (i = 0; b != '\0'; i++)
	{
		x = x + (b[i] * (2 ** (_strlen(b) - i)));
	}
	return (x);
