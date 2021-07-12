#include <stdio.h>
#include "holberton.h"

/**
 * main - print ll arguments
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
