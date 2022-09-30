#include <stdio.h>
#include "main.h"
#include "2-strlen_recursion.c"

/**
 * checker - function checks for palindrome
 * @s: pointer to string
 * @length: highest index of stringg
 * @a: lowest index of string
 *
 * Return: 0
 */

int checker(char *s, int length, int a)
{
	if (length <= a)
		return (1);
	if (s[length] != s[a])
		return (0);
	return (checker(s, length - 1, a + 1));
}


/**
 * is_palindrome - function checks for palindrome
 * @s: pointer to string
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int length;

	if (s[0] == '\0')
		return (1);
	length = _strlen_recursion(s);

	return (checker(s, length - 1, 0));
}
