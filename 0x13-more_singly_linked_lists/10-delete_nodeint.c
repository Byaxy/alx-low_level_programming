#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index in a linked list
 * @head: pointer to the head of the linked list
 * @index: index
 * Return: 1 on success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp_nxt;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != (index - 1) || tmp == NULL)
		return (-1);

	tmp_nxt = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp_nxt);

	return (1);
}
