#include "lists.h"

/**
 * print_list - Prints the contents of a singly l list.
 *
 * @h: The pointer to head node.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int x;

	x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
