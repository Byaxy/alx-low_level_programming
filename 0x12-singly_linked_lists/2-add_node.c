#include "lists.h"

/**
 * _strlen - finds length of a string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count]; count++)
		;
	return (count);
}

/**
 * add_node - adds a node at the beginning of a linked list
 * @str: string to add to new node
 * @head: double pointer to the linked list
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
