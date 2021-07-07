#include "holberton.h"

/**
 * find_root - find square root of num
 * @num: integer input
 * @x: test as root
 * Return: square root of num, -1 if not natural root
 */

int find_root(int num, int x)
{
	if (x * x > num)
	{
		return (-1);
	}
	if (x * x == num)
	{
		return (x);
	}
	return (find_root(num, x + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: integer input
 * Return: natural square root of n, -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_root(n, 0));
}
