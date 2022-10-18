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
	int lower_x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lower_x = tolower(x);
		putchar(lower_x);
	}
		putchar('\n');
	return (0);
}
