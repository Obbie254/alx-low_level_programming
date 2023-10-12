#include "main.h"
/**
 * rep - prints xcters
 * @x: no. of times
 */
void rep(int x)
{
	_putchar(',');
	while (x > 0)
	{
		_putchar(' ');
		x--;
	}
}
/**
 * print_times_table - fxn prints n times table
 * @n: number of times
 * Return: 0 if not in range 0<n<15
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				d = i * j;
				if (d == 0)
				{
					if (j > 0 && j < n + 1)
						rep(3);
					_putchar(d + '0');
				}
				else if (d < 10 && j != 0)
				{
					rep(3);
					_putchar(d + '0');
				}
				else if (d >= 10 && d < 100)
				{
					rep(2);
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else if (d >= 100)
				{
					rep(1);
					_putchar((d / 100) + '0');
					_putchar(((d % 100) / 10) + '0');
					_putchar(((d % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
