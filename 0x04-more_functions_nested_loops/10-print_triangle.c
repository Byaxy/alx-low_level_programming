#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = size;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < k - 1)
			{
				_putchar(' ');
				j++;
			}
			while (k <= size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
			k = size - 1;
			j = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
