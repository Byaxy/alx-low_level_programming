#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2D grid/array previously created by
 * alloc_grid function
 * @grid: pointer to the 2D array
 * @height: height of the array
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
