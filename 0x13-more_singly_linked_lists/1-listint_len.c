#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of components comprising a list.
 *
 * @h: A pointer to the beginning component.
 * Return: The result of the computation.
 */
size_t listint_len(const listint_t *h)
{
	int q;

	q = 0;

	while (h != NULL)
	{
		q++;
		h = h->next;
	}
	return (q);
}
