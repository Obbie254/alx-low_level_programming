#include "main.h"

/**
 * prm2 - fxn allow iteration from 2 to n
 * @a: same number as n
 * @b: increasing diviser
 * return: prime number
 */
int prm2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prm2(a, b + 1));
}

/**
 * is_prime_number - fxn checks for prime number
 * @n: number to be checked
 * return: 1 for a prime number and 0 for fail
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prm2(n, 2));
}
