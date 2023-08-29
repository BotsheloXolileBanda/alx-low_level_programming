#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Displays all the components of the list.
 *
 * @h: Pointer to the beginning node.
 * Return: The number of components comprising the list.
 */
size_t print_listint(const listint_t *h)
{
	int r;

	r = 0;

	if (h == NULL)
	{
		return (0);
		exit(EXIT_SUCCESS);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			r++;
			h = h->next;
		}
		return (r);
	}
}
