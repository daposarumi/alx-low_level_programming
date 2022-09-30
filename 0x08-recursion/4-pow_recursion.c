#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function raises one
 * number to the power of the other
 * @x: integer
 * @y: power of
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

	_putchar('\n');
}
