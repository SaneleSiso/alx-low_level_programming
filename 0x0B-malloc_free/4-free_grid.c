#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees an array
 * @grid: the array to be freed
 * @height: the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

