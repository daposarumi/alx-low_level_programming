#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - function multiplies two numbers
 * @argc - count
 * @argv - pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
				return (0);
	}
}
