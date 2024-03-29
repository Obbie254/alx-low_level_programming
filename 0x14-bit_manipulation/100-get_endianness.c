#include "main.h"

/**
 * get_endianness - fxn that checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *) &x; /* points to the first byte of the integer x */
	return (*c);
}
