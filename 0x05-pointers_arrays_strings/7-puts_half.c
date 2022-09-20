#include <stdio.h>
#include "main.h"
int string_len(char *str);


/**
 * puts_half - prints half of string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, half, odd_half;

	len = string_len(str);
	half = len / 2;
	odd_half = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = half; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = odd_half + 1; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}

/**
 * string_len - length of string
 * @str: pointer to string
 *
 * Return: length
 */

int string_len(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	return (length);
}
