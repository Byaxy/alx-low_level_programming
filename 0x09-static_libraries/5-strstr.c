#include "holberton.h"
#define NULL 0

/**
 * _strstr - find and return pointer to first occurance of substring
 * @haystack: string to search
 * @needle: substring
 * Return: pointer to string at first occurance of whole substring,
 * NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i;
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++;
					j++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
