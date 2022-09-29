#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion
 * @s: pointer to string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
