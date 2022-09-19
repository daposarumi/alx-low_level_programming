#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	*b = new;
}
