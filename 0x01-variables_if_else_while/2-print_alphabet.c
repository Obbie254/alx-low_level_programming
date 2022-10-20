#include <stdio.h>

/**
 *main - prints alphabets in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
