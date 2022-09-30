#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function prints in reverse
 * @s: pointer to string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (len = len - 1; len >= 0; len--)
	{
		putchar(s[len]);
	}

	putchar('\n');
}
