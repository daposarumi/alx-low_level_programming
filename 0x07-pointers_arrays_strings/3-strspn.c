#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strspn - function gets the length of a prefix substring
 * @s: pointer to string
 * @accept: origin of bytes
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, j;

	for (length = 0; *(s + length) != '\0'; length++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + length) == *(accept + j))
			{
				break;
			}
		}
		if (!*(accept + j))
			break;
	}
	return (length);
}
