#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: Function prints 10 times
 * the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int x, a;

	for (a = 0; a <= 9; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	_putchar('\n');
	}
}
