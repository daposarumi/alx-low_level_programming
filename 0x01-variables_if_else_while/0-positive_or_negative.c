#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *  main - beginning of program
 *  @void - no parameters
 *
 *  Description - function checks if number
 *  is positive or negative
 *  Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
