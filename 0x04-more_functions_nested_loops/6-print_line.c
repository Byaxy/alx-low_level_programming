#include "holberton.h"

/**
 * print_line - draws line on the terminal
 * @n: lenth of line
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
