#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates length of a string
 * @str: string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates n bytes of string 2 onto string 1
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate
 * Return: pointer to the cocncatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, num, len;
	char *ptr;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*prt) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
