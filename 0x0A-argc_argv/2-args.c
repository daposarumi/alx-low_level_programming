#include <stdio.h>
#include "main.h"

/**
 * main - function prints all arguments
 * @agrc: count
 * @agrv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
