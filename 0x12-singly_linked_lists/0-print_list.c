#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
  * print_list - Prints the elements of a linked list.
  *
  * @h: Head node.
  *
  * Return: Number of elements in a list.
  */
size_t print_list(const list_t *h)
{
	unsigned int r;

	r = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] [%s]\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		r++;
	}
	return (r);
}
