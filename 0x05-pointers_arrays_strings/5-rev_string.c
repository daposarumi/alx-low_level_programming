#include <stdio.h>
#include "main.h"
int string_length(char *s);


/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n, len;
	char *begin, *end, temp;

	len = string_length(s);
	begin = s;
	end = s;

	for (n = 0; n < len - 1; n++)
		end++;

	for (n = 0; n < len / 2; n++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * string_length - function that returns string length
 * @s: pointer to string
 *
 * Return: void
 */
int string_length(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
