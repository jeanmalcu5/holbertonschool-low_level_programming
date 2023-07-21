#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: dog.
 * @name: of the dog.
 * @age: of the dog.
 * @owner: of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
