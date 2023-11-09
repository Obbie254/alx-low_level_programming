#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - fxn that prints name
 * @name - string ot be printed
 * @f() - fxn that does the printing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
