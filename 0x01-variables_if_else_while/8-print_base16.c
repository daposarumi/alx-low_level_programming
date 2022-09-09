#include <stdio.h>
#include <ctype.h>

/**
 * main - prints numbers
 * Description: This function prints all the
 * numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;
	char a;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (a = 'a'; a <= 'f'; ++a)
		putchar(a);
	putchar('\n');
	return (0);
}
