#include <stdio.h>

/**
 * main - prints numbers 0-9
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar('0' + c);
	putchar('\n');
	return (0);
}
