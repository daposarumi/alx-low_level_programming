#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name
 * name: name
 * f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
