#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: pointer to array
 * @n: nnumber of array elements to print
 * Return: none
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
