#include "holberton.h"

/**
 * _strncpy - copy string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: number of bytes of string to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
