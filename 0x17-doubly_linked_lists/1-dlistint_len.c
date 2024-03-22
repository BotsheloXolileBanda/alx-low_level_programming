#include "lists.h"

/**
  * dlistint_len - Returns number of nodes in a list.
  *
  * @h: Pointer to first node.
  * Return: Number of nodes.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
