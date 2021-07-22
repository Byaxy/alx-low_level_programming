#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator of numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;

	if (n > 0)
	{
		va_list(varlist, n);
		for (i = 0; i <= n; i++)
		{
			printf("%d", va_arg(varlist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(varlist);
	}
	printf("\n");
}
