#include <stdio.h>

/**
 *main - Programm entry point
 *Description: Print single digit numbers of base 10
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
