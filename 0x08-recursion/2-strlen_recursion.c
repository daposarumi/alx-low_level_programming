#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - function returns length of string
 * @s: pointer to string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
