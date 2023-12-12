#include "lists.h"

/**
  * print_listint - Prints the contents of a linked list and nodes.
  *
  * @h: Pointer to the head node.
  * Return: The number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t r;

	for (r = 0; h != NULL; h = h->next, r++)
	{
		printf("%d\n", h->n);
	}
	return (r);
}
