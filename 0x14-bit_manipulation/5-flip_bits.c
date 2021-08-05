#include "main.h"

/**
 * flip_bits - determines number of bit to flip to get from one
 * number to another
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		num_bits += (diff & 1);
		diff >>= 1;
	} while
			(diff > 0);

	return (num_bits);
}
