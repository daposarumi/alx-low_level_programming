#include "main.h"
#include <stdio.h>

/**
 * compare - function locates substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer to beginning of string
 */
int compare(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}

/**
 * _strstr - function locates substring
 * @haystack: pointer to the null-terminated byte
 * @needle: pointer to the null-terminated byte
 *
 * Return: pointer to beginning of string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
