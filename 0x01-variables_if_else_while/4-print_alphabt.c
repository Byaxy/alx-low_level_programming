#include <stdio.h>

/**
 *main - Programm entry point
 *Description: Print the alphabet without q and e
 *Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar(ch);
	return (0);
}
