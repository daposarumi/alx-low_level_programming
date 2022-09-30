#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @string: pointer to string
 *
 * Return: string
 */
char *leet(char *string)
{
	int i, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1',},
	     str[10] = {'a', 'A', 'e', 'E', 'o', '0', 't', 'T', 'l', 'L'};

	j = 0;
	while (string[j])
	{
		for (i = 0; i < 10; i++)
		{
			if (string[j] == str[i])
				string[j] = subs[i];
		}
		j++;
	}
	return (string);
}
