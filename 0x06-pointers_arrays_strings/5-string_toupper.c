#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @string: pointer
 *
 * Return: string in uppercase
 */
char *string_toupper(char *string)
{
	const char OFFSET = 'a' - 'A';
	int i = 0;

	while (*(string + 1))
	{
		if (*(string + 1) >= 'a' && *(string + 1) <= 'z')
		{
			*(string + 1) -= OFFSET;
		}
		i++;
	}
	return (string);
}
