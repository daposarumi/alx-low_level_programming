#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - beginning of program
 *
 * Description - function checks if number
 * is positive or negative
 */
void positive_or_negative(int i)
{
	i = 0;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
