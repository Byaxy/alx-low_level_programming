#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer to an 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
