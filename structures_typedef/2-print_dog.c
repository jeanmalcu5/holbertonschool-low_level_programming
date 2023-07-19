#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (name == NULL)
	{
		printf("name: (nil)");
	}
	else
	{
		printf("name: %s", d->name);
	}

	if (age == NULL)
	{
		printf("age: (nil)");
	}
	else
	{
		printf("age: %s", d->age);
	}

	if (owner == NULL)
	{
		printf("owner: (nil)");
	}
	else
	{
		printf("owner: %s", d->owner);
	}
}
