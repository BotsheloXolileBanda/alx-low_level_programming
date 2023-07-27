#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - Determines the number of elements a singly list has.
 *
 * @h: Head element in a list.
 * Return: The number of such elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int r;

	r = 0;

	while (h != NULL)
	{
		h = (*h).next;
		r++;
	}
	return (r);
}
