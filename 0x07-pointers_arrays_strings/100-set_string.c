#include "main.h"
#include <stdio.h>

/**
 * set_string - function sets value of pointer to a char
 * @s: pointer
 * @to: pointer to change to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
