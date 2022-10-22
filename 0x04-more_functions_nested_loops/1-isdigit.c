#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: variable text
 * Return: Always 0 for false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
