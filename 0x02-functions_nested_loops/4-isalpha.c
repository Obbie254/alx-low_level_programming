#include "main.h"

/**
 * _isalpha - fxn check if char is a letter
 * @c: char that is checked
 * Return: 1 on success otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
