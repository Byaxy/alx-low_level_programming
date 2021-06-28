#inlcude "holberton.h"

/**
 *_puts - prints a string
 * @str: pointer to the string
 * Return: none
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
