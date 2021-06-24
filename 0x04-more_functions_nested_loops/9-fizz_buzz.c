#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: print fizz buzz for multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) && (i % 5))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	_putchar('\n');

	return (0);
}
