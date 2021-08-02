#include "lists.h"

/**
 * listint_len - finds the number elements of a linked list
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
