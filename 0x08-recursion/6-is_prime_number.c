#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function checks for prime
 * numbers
 * @n: number
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n % 4 == 0)
		return (0);
	if (n % 5 == 0)
		return (0);
	if (n % 1 == 0 && n % n == 0)
		return (1);
}
