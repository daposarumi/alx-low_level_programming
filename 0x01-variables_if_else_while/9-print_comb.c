#include <stdio.h>
#include <ctype.h>

/**
 * main - program prints possible combo of nums.
 * Description - This function prints the possible
 * combinations of digits, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
