#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - programm entry point. User should input two integers
 * plus an operator and main will calculate the result. Main prints
 * sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
