#include "lists.h"

/**
  * print_listint - Sends the contents of a list to stdout.
  *
  * @h: Head node to start list.
  * Return: The number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
