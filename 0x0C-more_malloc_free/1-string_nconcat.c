#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - function concatenates
 * string
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (s1[j] != '\0')
		j++;

	str = malloc(sizeof(char) * (j + n + 1));
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	while (i < n && s2[i] != '\0')
	{
		str[j] = s2[i];
		j++, i++;
	}
	str[j] = '\0';
	return (str);
}
