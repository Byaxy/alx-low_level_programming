#include "holberton.h"

/**
 * more_numbers - print numbers 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}

		_putchar('\n');
	}

	return (0);
}
