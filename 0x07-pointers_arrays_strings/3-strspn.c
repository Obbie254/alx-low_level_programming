#include "main.h"
/**
 * _strspn - fxn that gets length of a prefix substring.
 * @s: input string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (y = 0; *(s + y); y++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + y) == *(accept + x))
				break;
		}
	if (*(accept + x) == '\0')
		break;
	}
	return (y);
}
