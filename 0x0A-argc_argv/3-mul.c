#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiply two numbers
 * @argc: argument counter
 * @argv: pointer to an array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argvv[2]));

	return (0);
}
