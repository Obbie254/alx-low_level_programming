#include <stdio.h>
#include <stdlib.h>

/**
 * main - prog give a multiplication of two args
 * @argc: arg count
 * @argv: arg array
 * Return: mult on success, 1 on fail
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", (x * y));
	return (0);
}
