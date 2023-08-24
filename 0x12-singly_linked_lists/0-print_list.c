#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - Outputs the contents of a linked list.
 * @h: The node which is a header.
 *
 * Return: The number of nodes or elements in the list.
 */
size_t print_list(const list_t *h)
{
	unsigned int r;

	r = 0;

	while ((*h).next != NULL)
	{
		if ((*h).str != NULL)
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		r++;
		h = h->next;
	}
	return (r);
}
