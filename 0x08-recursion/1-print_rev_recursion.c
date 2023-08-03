#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function prints in reverse
 * @s: string to be printed
 * Description: prints string in reverse followed by a new line
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
