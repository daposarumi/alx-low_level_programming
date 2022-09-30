#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dset: first string
 * @src: second
 * @n: bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
