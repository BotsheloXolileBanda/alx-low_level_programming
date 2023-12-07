#include "lists.h"

/**
 * list_len - Counts the number of nodes in a singly linked list.
 *
 * @h: The head node pointer.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	for (r = 0; h != NULL; h = h->next)
	{
		r++;
	}
	return (r);
}
