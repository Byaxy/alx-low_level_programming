#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to dog_t
 * @d: pointer to dog struct dog_t
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
