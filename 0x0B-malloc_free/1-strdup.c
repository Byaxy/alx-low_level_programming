#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies str to newly allocated memory
 * @str: pointer to string to copy
 * Return: pointer to new memory, Null otherwise
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		len++;
		i++;
	}
	len++;

	dup_str = malloc(len * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}

	return (dup_str);
}
