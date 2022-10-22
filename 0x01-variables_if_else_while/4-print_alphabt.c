#include <stdio.h>

/**
 * main - prints alphabets except q and e.
 *
 * Return: always 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
