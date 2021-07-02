#include "holberton.h"

/**
 * rot13 - rotates characters by 13
 * @n: character input
 * Return: n
 */

char *rot13(char *n)
{
	int i, j;
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; l1[j] != '\0'; j++)
		{
			if (n[i] == l1[j])
			{
				n[i] = l2[j];
				break;
			}
		}
	}
	return (n);
}
