#include "main.h"

/**
 * sum_natural_multi - prints sum of the multiples of 3 and 5
 *
 * Return: nothing
 */
void sum_natural_multi(void)
{
	int sum = 0, n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	if (sum >= 1000)
	{
		_putchar((sum / 1000) + '0');
		_putchar(((sum % 1000) / 100) + '0');
		_putchar((((sum % 1000) % 100) / 10) + '0');
		_putchar((((sum % 1000) % 100) % 10) + '0');
	}
	else if (sum >= 100 && sum < 1000)
	{
		_putchar((sum / 100) + '0');
		_putchar(((sum % 100) / 10) + '0');
		_putchar(((sum % 100) % 10) + '0');
	}
	else if (sum >= 10 && sum < 100)
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
	}
	else
		_putchar(sum + '0');
}
