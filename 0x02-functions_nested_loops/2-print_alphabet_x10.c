#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: Function prints 10 times
 * the alphabet, in lowercase,
 * followed by a new line
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int x, a, lower_x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			lower_x = tolower(x);
			_putchar(lower_x);
		}
	}
	_putchar('\n');
}
