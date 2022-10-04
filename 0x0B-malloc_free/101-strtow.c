#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * ch_free_grid - frees array
 * @grid: array
 * @height: height
 *
 * Return: void
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function splits string into two words
 * @str: pointer to string
 *
 * Return: 0
 */
char **strtow(char *str)
{
	char **array;
	unsigned int c, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	array = malloc((height + 1) * sizeof(char *));
	if (array == NULL || height == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				array[i] = malloc((c - al + 2) * sizeof(char));
				if (array[i] == NULL)
				{
					ch_free_grid(array, 1);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; al <= c; al++, j++)
			array[i][j] = str[al];
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
