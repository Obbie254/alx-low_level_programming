#include <stddef.h>
#include "main.h"
/**
 * _strchr - prints from the first occurence of a char
 * @s: source string
 * @c: test char
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	char *t = NULL;

	while (*s != '\0')
	{
		if (*s == c)
			*t = c;
	}
	if (*s == c)
		*t = c;
	return (t);
}
