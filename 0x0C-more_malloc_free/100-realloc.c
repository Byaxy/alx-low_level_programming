#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocte memory and set values to 0
 * @ptr: pointer to memory previously allocated using malloc(old_size)
 * @old_size: size of previously allocated memory
 * @new_size: new size of memory to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);

	return (p);
}
