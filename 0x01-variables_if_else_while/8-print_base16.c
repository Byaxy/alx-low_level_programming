#include <stdio.h>

/**
 *main - Programm entry point
 *Description: print base 16 mumbers in lowercase
 *Return: 0
 */

int main(void)
{
	char ch1;
	char ch;

	for (ch1 = '0'; ch1 <= '9'; ch1++)
	{
		putchar(ch1);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
