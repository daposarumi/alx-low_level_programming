#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes struct
 * @d: member
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: void
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
