#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function raises power
 * @x: number
 * @y: power to be raised to
 * Description: function raises x to the power of y
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
