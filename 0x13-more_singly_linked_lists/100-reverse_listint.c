#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	(*head) = prev;

	return (*head);
}
