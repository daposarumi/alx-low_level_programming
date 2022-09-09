#include <stdio.h>
#include <ctype.h>

/**
 * main - Beginning of program
 * Description: function print alphabets in
 * lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
