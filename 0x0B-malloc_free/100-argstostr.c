#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: string lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * argstostr - concatenates all arguments to a program
 * @ac: argument counter
 * @av: pointer to array of arguments
 * Return: pointer concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);

	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}

	return (str);
}
