#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints name, age and owner if not null.
 * @d: struct dog
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
