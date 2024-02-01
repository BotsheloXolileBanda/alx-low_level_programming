#include "lists.h"

/**
  * list_len - Computes the length of a singly l list.
  *
  * @h: Header node pointer.
  * Return: The computation result.
  */
int list_len(const list_t *h)
{
	int x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (x);
}
