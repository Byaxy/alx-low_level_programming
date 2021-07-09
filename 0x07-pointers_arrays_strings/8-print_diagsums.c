#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int d_sum1 = 0;
	int d_sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		d_sum1 += a[j];
	}

	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		d_sum2 += a[j];
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
