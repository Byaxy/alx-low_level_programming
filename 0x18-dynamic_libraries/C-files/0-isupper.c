#include "main.h"

/**
 * _isupper - cheks if character is uppercase
 * @c: the character to be checked
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
