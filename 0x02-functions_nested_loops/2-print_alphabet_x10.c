#include "holberton.h"

/**
 *print_alphabet_x10 - print the alphabet in lowercase 10 times
 *Return: void
 */

void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
