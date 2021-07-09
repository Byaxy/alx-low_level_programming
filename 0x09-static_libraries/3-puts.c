#include "holberton.h"
#include <unistd.h>

/**
 *_puts - prints a string
 * @s: pointer to the string
 * Return: none
 */

void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
