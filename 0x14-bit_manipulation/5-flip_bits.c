#include "main.h"

/**
 * flip_bits - fxn gives number of bits to change from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((exclusive >> i) & 1)
			count++;
	}

	return (count);
}
