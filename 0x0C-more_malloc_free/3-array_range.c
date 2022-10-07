#include <stdio.h>
#include "main.h"

/**
 * array_range - function creates an
 * array of integers
 * @min minimum
 * @max: maximum value
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
