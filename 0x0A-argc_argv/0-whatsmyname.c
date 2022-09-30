#include <stdio.h>
#include "main.h"

/**
 * main - function prints the name of the argument
 * @argc: count
 * @argv: pointer to array
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
