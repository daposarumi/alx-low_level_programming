#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: int. to be checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
