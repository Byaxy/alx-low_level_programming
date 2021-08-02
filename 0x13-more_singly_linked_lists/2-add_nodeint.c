#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: pointer to the linked list
 * @n: int to add in the new node
 * Return: pointer to new list, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
