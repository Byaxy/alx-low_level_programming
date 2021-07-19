#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of struct dog_t
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog1;
	char *new_name;
	char *new_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	if (name != NULL)
	{
		new_name = malloc(sizeof(char) * i + 1);
		if (new_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
	}
	if (owner != NULL)
	{
		new_owner = malloc(sizeof(char) * j + 1);
		if (new_owner == NULL)
		{
			free(new_name);
			free(dog1);
			return (NULL);
		}
	}
	for (k = 0; k <= i; k++)
		new_name[k] = name[k];
	for (k = 0; k <= j; k++)
		new_owner[k] = owner[k];
	dog1->name = new_name;
	dog1->age = age;
	dog1->owner = new_owner;

	return (dog1);
}
