#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies string
 * @dest: first string
 * @src: second string
 * 
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
