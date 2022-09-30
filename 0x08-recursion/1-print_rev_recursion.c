#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * _print_rev_recursion - function prints string in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		_print_rev_recursion(s + 1);
	}
}
