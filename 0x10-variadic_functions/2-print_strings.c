#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separate strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(varlist, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(varlist, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(varlist);
	}
	printf("\n");
}
