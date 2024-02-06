#include "lists.h"

/**
  * get_nodeint_at_index - Returns at node specified.
  *
  * @head: First node.
  * @index: Address of node.
  * Return: The node found, or NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int fetch = 0;
	int fg = 0;
	listint_t *tm;

	while (head != NULL)
	{
		if (fetch == index)
		{
			fg++;
			tm = head;
		}
		head = head->next;
		fetch++;
	}

	if (fg)
	{
		return (tm);
	}
	else
	{
		return (NULL);
	}
}
