#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog.
 * @d: dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}

	if (age == NULL)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %f\n", d->age);
	}

	if (owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
