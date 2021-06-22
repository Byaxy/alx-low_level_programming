#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 *@x: number entered
 *Return: last digit of the number
 */

int print_last_digit(int x)
{
	int y;
	y = x % 10;

	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
	_putchar('\n');
}
