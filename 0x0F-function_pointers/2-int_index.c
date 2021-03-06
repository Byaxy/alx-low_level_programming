#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - calls a function to search for an integer in an array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to search function
 * Return: index where integer is found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
