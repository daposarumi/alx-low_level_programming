#include "main.h"
#include "stdio.h"
#include "unistd.h"

/**
 * main - write a function that prints '_putchar'
 * @void: nothing
 *
 * Return: 0
*/


int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{	
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
