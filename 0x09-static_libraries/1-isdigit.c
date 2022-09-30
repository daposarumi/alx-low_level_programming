#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits 0-9
 * @c: digit to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
