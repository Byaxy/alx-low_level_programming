#include "holberton.h"
#include <stdio.h>

/**
 * create_array - create an array of chars and initialize
 * it with a char
 * @size: size of the array
 * @c: char to initialize array with
 * Return: pointer to array, Null otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
