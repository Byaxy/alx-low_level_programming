#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments to a program
 * @ac: argument counter
 * @av: pointer to array of arguments
 * Return: pointer concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, len++)
			;
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	s = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}

	return (s);
}
