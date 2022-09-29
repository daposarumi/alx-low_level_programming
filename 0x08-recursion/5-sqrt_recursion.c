#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function finds sqaure root
 * of number
 * @n: number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (_sqrt(n, 0));
}

/**
 * sqrt - function returns root of a number
 * @i: integer
 * @j: check
 *
 * Return: 0
 */
int _sqrt(int i, int j)
{
if (i == j * j)
return (j);
if (i > j * j)
return (-1);
return (_sqrt(i, j + 1));
}
