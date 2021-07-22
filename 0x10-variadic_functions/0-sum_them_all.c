#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all given arguments
 * @n: list of integers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(varlist, n); /* Initialize argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(varlist, int); /* get next argument value */
	}

	va_end(varlist); /* free list */
	return (sum);
}
