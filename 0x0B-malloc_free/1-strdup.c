#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns pointer to newly
 * allocated space in memory
 * @str: pointer to string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *strs;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	;

	strs = (char *)malloc(sizeof(char) * (i + 1));

	if (strs == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strs[j] = str[j];

	return (strs);
}
