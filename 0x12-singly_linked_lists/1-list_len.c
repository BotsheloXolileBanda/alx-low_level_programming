#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - A function that computes and returns the components of a list.
 * @h: A pointer to a beginning or head node.
 *
 * Return: The result of the computation.
 */
size_t list_len(const list_t *h)
{
	unsigned int r;

	r = 0;

	while (h != NULL)
	{
		r += 1;
		h = h->next;
	}
	return (r);
}
