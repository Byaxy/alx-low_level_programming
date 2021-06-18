#include <stdio.h>

/**
 *main - Programm entry point
 *Description: Print the alphabet without q and e
 *Return: 0
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
