#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function allocates memory
 * @b: number of byte
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
