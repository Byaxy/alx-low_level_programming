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
		n = n* -1;
		y = n;
		_putchar('-');
	}

	y = y / 10;

	if (y != 0)
	{
		print_number(y);
	}

	_putchar((unsigned int) n % 10 + '0');
}
