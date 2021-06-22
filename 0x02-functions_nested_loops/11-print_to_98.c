#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers from n o 98
 *@n: input number
 *Return: none
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
