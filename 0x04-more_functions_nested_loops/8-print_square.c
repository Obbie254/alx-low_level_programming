#include "main.h"

/**
* print_square - prints a square using #
* @size: The number of # printed.
*/

void print_square(int size)
{
	int x, y;

	if (size >  0)
	{
		for (y = 0; y <= size; y++)
		{
			for (x = 0; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
