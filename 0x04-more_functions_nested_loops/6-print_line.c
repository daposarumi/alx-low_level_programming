#include "main.h"

/**
 * print_line - function prints straight line in terminal
 * @n: number of times to print _
 *
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
