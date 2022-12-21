#include "main.h"

/**
 * _pow_recursion - fxn that returns the value of x raised to power of y
 * @x: the base parameter
 * @y: the exponent parameter
 * Return: result x to power y
 */
int _pow_recursion(int x, int y)
{
	int f;

	if (y <= 0)
	{
		if (y < 0)
			return (-1);
		else
			return (1);
	}
	f = _pow_recursion(x, y - 1);
	return (x * f);
}
