#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: pointer to string
 * Description: function returns length of string
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

