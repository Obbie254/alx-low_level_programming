#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - fxn that prints struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
