#include "lists.h"

/**
 * pop_listint - deletes the head of a node in a linked list
 * @head: pointer to the linked list
 * Return: head node data, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
