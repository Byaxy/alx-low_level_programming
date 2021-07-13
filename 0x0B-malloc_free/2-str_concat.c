#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings to a new
 * allocated memory
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i))
	{
		len1++;
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		len2++;
		j++;
	}
	concat_str = malloc((len1 + len2) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	return (concat_str);
}
