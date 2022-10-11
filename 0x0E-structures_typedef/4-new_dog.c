#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * new_dog - function creates a new dog.
 * @age: age of the dog.
 * @owner: pointer to owner of the dog.
 * @name: pointer to the name of the dog.
 *
 * Return: New dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	for (nameLen = 0; name[nameLen]; nameLen++)
	;
	for (ownerLen = 0; owner[ownerLen]; ownerLen++)
	;
	new_dog->name = malloc(nameLen * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(ownerLen * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
