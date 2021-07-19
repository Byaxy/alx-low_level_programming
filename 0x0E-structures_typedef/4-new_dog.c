#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - calculates the length of a string
 * @str: string
 * Return: length of the string
 */

int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}


/**
 * strcpy - copies src string to dest
 * @dest: destination of string
 * @src: sorce of string
 * Return: pointer to copied string
 */

char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new instance of struct dog_t
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *new_name;
	char *new_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		new_name = malloc(len(name) + 1);
		if (new_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(new_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		new_owner = malloc(len(owner) + 1);
		if (new_owner == NULL)
		{
			free(new_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(new_owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
