#include "holberton.h"

/**
 * swap_int - swaps values of tow integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
