#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: string to compare
 * Return: number of bytes matched consistently
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, k = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (k);
		}
		i++;
	}

	return (k);
}
