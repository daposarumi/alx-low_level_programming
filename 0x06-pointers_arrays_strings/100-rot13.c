#include <stdio.h>
#include "main.h"

/**
 * rot13 - function encodes string using rot13
 * @string: pointer to string
 *
 * Return: encoded string
 */
char *rot13(char *string)
{
	int i, j;
	char alphabeticos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	i = 0;
	while (*(string + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string + i) == alphabeticos[j])
			{
				*(string + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
