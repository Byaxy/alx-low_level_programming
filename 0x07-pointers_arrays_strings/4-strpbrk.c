#include "holberton.h"
#define NULL 0

/**
 * _strpbrk - return pointer to the first byte in s that matches that in accept.
 * @s: string to search
 * @accept: string tocompare
 * Return: pointer to index of s at first match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}

	return (NULL);
}
