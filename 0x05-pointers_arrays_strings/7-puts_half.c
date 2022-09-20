#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;

	j = i / 2;
	if (i % 2)
		j += 1;

	while (j < 1)
	{
		putchar(*(str + 1));
		j++;
	}
	putchar('\n');
}
