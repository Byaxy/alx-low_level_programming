#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: linked list
 * Return: none
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
