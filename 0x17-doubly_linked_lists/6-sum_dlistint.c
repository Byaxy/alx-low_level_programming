#include "lists.h"

/**
 * sum_dlistint - sum all values of the dlistint_t linked list
 * @head: pointer to te beginning of the linked list
 *
 * Return: sum of all the values or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
