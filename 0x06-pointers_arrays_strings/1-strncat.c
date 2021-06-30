#include "holberton.h"

/**
 * _strncat - appends n bytes of string @src onto string @dest
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes of string @src to append
 * Return: the final concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
