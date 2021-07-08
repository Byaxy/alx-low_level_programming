#include "holberton.h"
#define NULL 0

/**
 * _strchr - find first occurance of a character in string
 * @s: string
 * @c: character to find
 * Return: pointer to first occurance of character, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0' && *s != c)
	{
		i++;
	}

	if (*s == c)
		return (&s[i]);
	else
		return (NULL);
}
