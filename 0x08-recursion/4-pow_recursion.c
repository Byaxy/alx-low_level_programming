#include "holberton.h"

/**
 * _pow_recursion - raises x to the power y
 * @x: number
 * @y: power to raise x to
 * Return: power of the number, -1 if power is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
