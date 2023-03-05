#include <stdio.h>
#include <ctype.h>

/**
 * main - function prints alpabet in lowercase
 * @void: nothing
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
		putchar('\n');

	return (0);
}
