#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer input
 * return: none
 */

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		n = n * -1;
		y = n;
		_putchar('-');
	}

	y /= 10;

	if (y != 0)
	{
		print_number(y);
	}

	_putchar((unsigned int) n % 10 + '0');
}
