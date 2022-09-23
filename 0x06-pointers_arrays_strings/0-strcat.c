#include <stdio.h>
#include <string.h>

/**
 * _strcat - function concantenates two strings.
 * @dest: pointer to string to append to
 * @src pointer to append to copy from
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
