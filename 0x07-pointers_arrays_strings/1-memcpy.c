#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies bytes from one
 * memory area to another
 * @s: pointer
 * @b: string
 * @n: bytes of memory
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
