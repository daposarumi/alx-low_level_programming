#include <stdio.h>
#include "main.h"

/**
 * _puts - function prints a string
 * @str: pointer to string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
