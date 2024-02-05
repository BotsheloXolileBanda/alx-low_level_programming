#include "lists.h"

/**
  * listint_len - Computes the number of nodes of list.
  *
  * @h: Pointer to head node.
  * Return: The size of list.
  */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; h = h->next, x++)
	{
	}

	return (x);
}
