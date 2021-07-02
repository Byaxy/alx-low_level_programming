#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the sum
 * @size_r: size of the buffer
 * Return: sum of the numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, x, y, z = 0;

	while (n1[i] != '\0')
		i++;
	while (n[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j++;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			x = n1[i] - '0';
		else
			x = 0;
		if (j >= 0)
			y = n2[j] - '0';
		else
			y = 0;
		r[k] = (x + y + z) % 10 + '0';
		z = (x + y + z) / 10;
	}
	if (z == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
			r[0] = z + '0';
		}
	}
	return (r);
}
