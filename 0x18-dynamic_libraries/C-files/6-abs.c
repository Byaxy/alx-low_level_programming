#include "main.h"

/**
 *_abs - computes the absolute value of a number
 *@x: the number to compute
 *Return: the absolute value of the number
 */

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	_putchar('\n');
}
