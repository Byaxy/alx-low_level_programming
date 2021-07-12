#include <stdio.h>
#include "holberton.h"

/**
 * main - prints name of programm
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
