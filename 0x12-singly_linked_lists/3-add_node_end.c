#include "lists.h"

/**
 * _strlen - fins the length of a string
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
 * add_node_end - adds a node at the end of a linked list
 * @head: double pointer to the linked list
 * @str: string to add to the last node
 * Return: pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

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
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
