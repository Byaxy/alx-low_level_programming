#include "holberton.h"

/**
 * _strcat - appends @src string at the end of the @dest string
 * @src: string to be appended
 * @dest: string to append on
 * Return: pointer to the final appeneded string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
