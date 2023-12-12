#include "lists.h"

/**
  * listint_len - Computes the number of nodes in a list.
  *
  * @h: Head node of the list.
  * Return: The number computed.
  */
size_t listint_len(const listint_t *h)
{
	size_t r;

	for (r = 0; h != NULL; h = h->next, r++)
	{
	}
	return (r);
}
