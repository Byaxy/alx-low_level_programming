#include <stdlib.h>

/**
 * print_name - calls a function passed as a parameter
 * @name: parameter for function call
 * @f: pointer to function to be called
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
