#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - function creates array of char
 * @size: of memory
 * @c: character
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(c) * size);
	unsigned int i;

	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
