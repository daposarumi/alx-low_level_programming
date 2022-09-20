#include <stdio.h>
#include "main.h"

/**
 * print_array - function prints array
 * @n: number of arrays
 * @a pointer to array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n -1)
			printf(", ");
	}
	printf("\n");
}
