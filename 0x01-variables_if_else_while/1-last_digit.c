#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *  main - beginning of program
 *  @void - no arguments
 *
 *  Description - function prints last digit
 *  stored in variable
 *  Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last string of n is %d and is greater th		an 5\n", n);
	else if (n == 0)
		printf("Last string of n is %d and is zero\n", n		);
	else if (n < 6 && n != 0)
		printf("Last string of n is %d and is less than 		6 and not 0\n", n);

	return (0);
}	