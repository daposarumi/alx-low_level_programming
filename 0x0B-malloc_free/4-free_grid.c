#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees grid
 * @grid: grid
 * @height: size
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
