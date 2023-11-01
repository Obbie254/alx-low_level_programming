#include <stdlib.h>
#include "main.h"

/**
* *argstostr - the fxn concatenates all the arguments
* @ac : arg of counter
;* @av : arg of vector
* Return: pointer to new str, NULL (Error)
*/

char *argstostr(int ac, char **av)
{
	int x, y;
	int a = 0;
	int str = 0;
	char *d;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
		{
			str++;
		}
		str++;
	}

	d = malloc(sizeof(char) * (str + 1));

	if (d == NULL)
		return (NULL);

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
		{
			d[a] = av[x][y];
			a++;
		}
		d[a] = '\n';
		a++;
	}
	return (d);
}
