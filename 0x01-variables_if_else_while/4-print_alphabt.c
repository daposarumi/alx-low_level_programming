#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: function prints alphabet in lower case
 * with an exception,
 * followed by new line
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
