#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of intergers ranging from min to max
 * @min: array starting point
 * @max: array end point
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int r = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * r);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
		ptr[i] = min++;

	return (ptr);
}
