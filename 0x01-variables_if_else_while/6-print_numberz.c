#include <stdio.h>

/**
 *main - Programm entry point
 *Description: Print numbers with putchar
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
