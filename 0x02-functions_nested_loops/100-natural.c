#include "main.h"

/**
 * sum_natural_multi - prints sum of the multiples of 3 and 5 below 1024(excluded)
 *
 * Return: nothing
 */
void sum_natural_multi(void)
{
	int sum = 0, n;

	for(n = 0; n < 1024; n++)
	{
		if(n % 3 = 0 || n % 5 = 0)
			sum = sum + n;
	}
	printf("The sum is "%d, sum);
}
