#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenates arguments
 * @ac: int
 * @av: char
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *news;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	} len++;

	news = malloc(len * sizeof(char));

	if (news == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			news[k] = av[i][j];
			k++;
		}
		news[k] = '\n';
		k++;
	}
	news[k] = '\0';
	return (news);
}
