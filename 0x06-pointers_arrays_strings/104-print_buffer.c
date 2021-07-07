#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - print a buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 * Return: none
 */

void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					printf(" ");
				if (j + i > size - 1)
					printf("  ");
				else
					printf("%.2x", b[j + i]);
				j++;
			}
			putchar(' ');
			j = 0;
			while (j < 10)
			{
				if (j + i > size -1)
					break;
				if (b[j + i] >= ' ' && b[j + i] <= '~')
				   	putchar(b[j + i]);
				else
					putchar('.');
				j++;
			}
			putchar('\n');
			i += 10;
		}
	}
}