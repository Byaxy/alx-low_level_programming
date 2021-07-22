#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print character
 * @vl: variable list
 */

void print_char(va_list vl)
{
	printf("%c", va_arg(vl, int));
}

/**
 * print_int - prints integer
 * @vl: variable list
 */

void print_int(va_list vl)
{
	printf("%d", va_arg(vl, int));
}

/**
 * print_float - prints float
 * @vl: vl
 */

void print_float(va_list vl)
{
	printf("%f", va_arg(vl, double));
}

/**
 * print_string - prints strings
 * @vl: vl
 */

void print_string(va_list vl)
{
	char *str;

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints everything. ints, char, float,and strings
 * @format: specifying data type
 */

void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *sep = "";
	va_list vl;

	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	va_start(vl, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", sep);
				choice[i].func(vl);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(vl);
	printf("\n");
}
