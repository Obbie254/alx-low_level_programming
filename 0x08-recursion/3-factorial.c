#include "main.h"

/**
 * factorial - fxn that returns the factorial of a given number
 * @n: the variable calculated
 * Return: 1 for success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
