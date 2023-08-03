#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function prints string
 * @char *s: pointer to string
 * Description: function prints string, followed by
 * a new line
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
