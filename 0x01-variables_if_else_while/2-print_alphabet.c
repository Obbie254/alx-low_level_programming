#include <stdio.h>

/**
 *main - prints alphabets in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
