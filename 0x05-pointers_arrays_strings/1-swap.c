#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps integers
<<<<<<< HEAD
 * @*a: integer
 * @*b: integer
=======
 * @a: first pointer
 * @b: second pointer
>>>>>>> 0a0915b2cb1f690966b09f184dca736c929dc2a0
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	*b = new;
}
