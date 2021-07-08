#include "holberton.h"

/**
 * _memset - fill memory with n bytes of constant value
 * @s: pointer to memory
 * @b: constant
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
