#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index
 * Return: 1 on success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int flag = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	flag <<= index;
	*n = (*n | flag);

	return (1);
}
