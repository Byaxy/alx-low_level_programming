#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * main - print opcodes of its own main function
 * @argc: arguments counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, num;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num - 1; i++)
	{
		printf("%02hhx ", p[i]);
	}
	printf("%02hhx\n", p[i]);

	return (0);
}
