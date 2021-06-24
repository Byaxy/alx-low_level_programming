#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i, j, k = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < k - 1; j++)
			{
				_putchar(' ');
			}
			while (k <= size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			k = size - 1;
			j = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
