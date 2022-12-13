#include "main.h"
/**
 * print_times_table - fxn prints n times table
 * @n: number of times
 * Return: 0 if not in range 0<n<15
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n > 15 || n < 0)
		return;
	else
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				d = i * j;
				if ((d / 10) > 0)
					_putchar((d / 10) + '0');
				else if ((d / 100) > 0)
					_putchar((d / 100) + '0');
				else if ((d / 1000) > 0)
					_putchar((d / 1000) + '0');
				else
					_putchar(' ');
				_putchar((d % 10) + '0');
				if (j < n + 1)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
