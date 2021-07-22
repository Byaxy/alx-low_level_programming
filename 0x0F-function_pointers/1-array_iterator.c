#include <stddef.h>

/**
 * array_iterator - call function to iterate through an array
 * @array: array
 * @size: size of array
 * @action: function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
}
