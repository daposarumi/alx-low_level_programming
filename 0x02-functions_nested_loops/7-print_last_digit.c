#include <stdio.h>
#include "main.h"


/**
 * print_last_digit - A fucntion that prints last digit of a number.
 * @n: integer number
 *
 * Return: value of last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
