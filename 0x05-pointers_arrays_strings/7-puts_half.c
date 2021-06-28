#include "holberton.h"

/**
 * puts_half - print half string
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int i = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	for (; n < i; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
