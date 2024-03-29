#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *news;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	news = malloc(sizeof(char) * (i + j + 1));

	if (news == NULL)
	{
		free(news);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		news[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		news[k] = s2[j];

	return (news);
}
