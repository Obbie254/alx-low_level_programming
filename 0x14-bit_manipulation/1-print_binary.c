#include "main.h"

/**
 * print_binary - fxn prints the binary equivalent of a decimal number
 * @n: equivalent binary number
 */
void print_binary(unsigned long int n)
{
	int i, lop = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;

		if (new & 1)
		{
			_putchar('1');
			lop++;
		}
		else if (new)
			_putchar('0');
	}
	if (!lop)
		_putchar('0');
}
