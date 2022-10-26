#include "main.h"

/**
 * _puts - prints a string, followed by \n
 * @str: string to be printed
 * Return: success 1
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
