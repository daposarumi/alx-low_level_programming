#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: program print numbers
 * from one to nine
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	
	return (0);
}
