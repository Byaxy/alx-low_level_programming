#include "main.h"

/**
 * print_binary - converts unsigned int to bbinary
 * @n: unsigned int
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int n_cpy, m;
	int len = 0;

	n_cpy = n;
	m = 1;

	while (n_cpy > 0)
	{
		len++;
		n_cpy >>= 1;
	}
	len -= 1;

	if (len > 0)
		m = m << len;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');

		m >>= 1;
	}
}
