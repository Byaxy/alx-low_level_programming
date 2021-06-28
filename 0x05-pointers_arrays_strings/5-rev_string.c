#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *y = s;
	int k = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		i++;
	}

	j  = i - 1;
	for (; k < ((j / 2) + 1) ; k++)
	{
		x = (j - k);
		n = s[k];
		s[k] = s[x];
		s[x] = n;
	}
}
