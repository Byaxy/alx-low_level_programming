#include "holberton.h"

/**
 *print_sign - determines the sign of entered number
 *@n: the number to be checked
 *Return: 1 if greater than zero, -1 if less than zero and 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
