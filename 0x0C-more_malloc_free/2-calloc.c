#include <stdio.h>
#include "main.h"

/**
 * _calloc - function allocates memory for
 * an array
 * @nmemb: number of elements
 * @size: size of object
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memloc = malloc(nmemb * size);

	if (memloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(memloc + i) = 0;

	return (memloc);
}
