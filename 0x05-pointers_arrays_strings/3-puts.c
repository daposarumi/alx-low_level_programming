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
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		putchar(str[len]);
	}
	putchar('\n');
}
