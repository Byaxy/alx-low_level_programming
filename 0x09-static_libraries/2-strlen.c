#include "holberton.h"

/**
 * _strlen - returns the length a string
 * @s: pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
