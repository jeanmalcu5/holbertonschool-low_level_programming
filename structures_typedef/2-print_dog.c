#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog.
 * @d: dog.
 * Return: if d == NULL, return nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if d (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	printf("age: %f\n", d->age);
	if (d-> == NULL)
	{
		printf("age: (nil)")
	}
	else
	{
		printf("age: %s\n", d->owner);
	}
}
