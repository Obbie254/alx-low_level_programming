#include "main.h"

/**
 * _strlen_recursion - fxn returns the length of a string
 * @s: string parameter
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
