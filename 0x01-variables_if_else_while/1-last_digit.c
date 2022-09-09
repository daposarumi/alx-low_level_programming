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
	int last_num;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (n > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, last_num);
	else if (n == 0)
		printf("Last digit of %i is %d and is zero\n", n, last_num);
	else if (n < 6 && n != 0)
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last_num);
	return (0);
}	
