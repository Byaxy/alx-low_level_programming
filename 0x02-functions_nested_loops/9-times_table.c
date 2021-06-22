#include "holberton.h"

/**
 *times_table - print the 9-times table
 *Return: none
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else
			{
				_putchar(k + 48);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
