#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
