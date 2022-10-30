#include "main.h"

/**
 * print_last_digit - it outputs the last digit
 * @n: working number
 * Return: last number
 */
int print_last_digit(int n)
{
	int lst = n % 10;

	if (lst < 0)
		lst = lst * -1;

	_putchar('0' + lst);
	return (lst);
}
