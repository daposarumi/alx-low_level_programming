#include "main.h"

/**
 * print_number - function prints integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		b = -n;
		_putchar('-');
	} else
	{
		b = n;
	}
	if (b / 10)
		print_number(b / 10);

	_putchar((b % 10) + '0');
}
