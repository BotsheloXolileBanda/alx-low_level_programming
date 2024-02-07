#include "lists.h"

/**
  * insert_nodeint_at_index - Adds a node at given point.
  *
  * @head: Start of list.
  * @idx: Point to insert node.
  * @n: Data of new node.
  * Return: New node or NULL.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	int fg = 0;
	listint_t *tmphd = *head;

	while (tmphd != NULL)
	{
		if (x == idx)
		{
			tmphd->n = n;
			fg++;
			break;
		}
		tmphd = tmphd->next;
		x++;
	}

	if (fg)
	{
		return (tmphd);
	}
	else
	{
		return (NULL);
	}
}
