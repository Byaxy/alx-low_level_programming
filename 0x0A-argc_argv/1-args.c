#include <stdio.h>
#include "holberton.h"

/**
 * main - print number of arguments
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}

	return (0);
}
