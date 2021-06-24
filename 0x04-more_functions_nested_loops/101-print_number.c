#inlcude "holberton.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: none
 */

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -n;
	}

	if (y / 10)
	{
		print_number(y / 10);
	}

	_putchar('0' + (y % 10));
}
