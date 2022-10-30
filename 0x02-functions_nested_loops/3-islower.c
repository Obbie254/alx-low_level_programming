#include "main.h"

/**
 * _islower - fxn checks if c is lowercase
 * @c: char checked by fxn
 * Return: 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
