#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 *@x: number entered
 *Return: last digit of the number
 */

int print_last_digit(int x)
{
	int y;

	if ((x % 10) >= 0)
	{
		y = x % 10;
	}
	else
	{
		y = (x % 10) * -1;
	}
	_putchar(y + 48);

	return (y);
}
