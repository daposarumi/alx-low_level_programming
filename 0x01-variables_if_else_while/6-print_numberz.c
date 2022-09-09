#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: print numbers one to
 * nine in a hard way
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
