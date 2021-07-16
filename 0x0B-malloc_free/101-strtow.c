#include "holberton.h"
#include <stdlib.h>

/**
 * wrd_count - counts the number of words in a string
 * @s:pointer to string to be counted
 * Return: number of words in string
 */

int wrd_count(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - splits string into words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	int i, j, k, l, num = 0, wrdcnt = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wrd_count(str);
	if (num == 1)
		return (NULL);
	words = (char **)malloc(num * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wrdcnt] = (char *)malloc(j * sizeof(char));
			j--;
			if (words[wrdcnt] == NULL)
				for (k = 0; k < wrdcnt; k++)
					free(words[k]);
				free(words[num - 1]);
				free(words);
				return (NULL);
			for (l = 0; l < j; l++)
				words[wrdcnt][l] = str[i + l];
			words[wrdcnt][l] = '\0';
			wrdcnt++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
