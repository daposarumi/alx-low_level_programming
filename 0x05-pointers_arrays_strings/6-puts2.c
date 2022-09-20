#include <stdio.h>
#include "main.h"
int string_len(char *str);

/**
 * puts2 - function prints numbers
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = string_len(str);

	for (i = 0; i < len; i =+2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

/**
 * string_len - function prints length of string
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
