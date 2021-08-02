#include "lists.h"

/**
 * free_listint2 - frees a linked list and set head to NULL
 * @head: pointer to the linked list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
