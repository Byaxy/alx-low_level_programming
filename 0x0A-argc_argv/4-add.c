#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_number - check argv to see if it's a number
 * @argvv: an argv input
 * Return: true if number, false if not
 */

bool is_number(char *argvv)
{
	int i;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}

	return (1);
}

/**
 * main - print sum of arguments if all are numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if argument is not number
 */

int main(int argc, char *argv[])
{
	int j = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (j < argc)
	{
		if (is_number(argv[j]))
		{
			sum += atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", sum);

	return (0);
}
