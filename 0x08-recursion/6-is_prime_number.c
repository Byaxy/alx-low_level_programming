#include "holberton.h"

/**
 * check_prime - cheks if number is prime
 * @num: number to be checked
 * @d: divisor
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int num, int d)
{
	if (num == d)
		return (1);
	if (num % d == 0)
		return (0);
	return (check_prime(num, d + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, d));
}
