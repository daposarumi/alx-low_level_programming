#include <stdio.h>
#include "main.h"

/**
 * cap_string - to capitalize all words
 * @string: pointer to string
 *
 * Return: string
 */
char *cap_string(char *string)
{
	const char OFFSET = 'a' - 'A';
	int j, i = 1;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (string[0] >= 'a' && string[0] <= 'z')
		string[0] -= OFFSET;
	while (string[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (string[i - 1] == sep[j] && (string[i] >= 'a' && string[i] <= 'z'))
					string[i] -= OFFSET;
		i++;
	}
	return (string);
}
