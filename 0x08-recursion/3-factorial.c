#include <stdio.h>
#include "main.h"

/**
 * factorial - function prints factorial of number
 * @n: integer
 * Description: prints factorial of a given number
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return n * factorial(n - 1);
}
