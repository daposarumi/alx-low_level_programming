#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory
 * @s: pointer to string
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
