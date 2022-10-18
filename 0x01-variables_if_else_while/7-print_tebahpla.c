#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints lowercase alphabets
 * in lower case
 *
 * Return: 0
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
		putchar(ltr);
	putchar('\n');

	return (0);
}
