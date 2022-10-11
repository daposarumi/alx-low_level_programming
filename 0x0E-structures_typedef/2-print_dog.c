#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function prints struct
 * @d: pointer
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Ownner: %s\n", d->owner);
	}
}

