#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
