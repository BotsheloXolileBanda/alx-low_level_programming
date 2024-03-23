#include "lists.h"

/**
  * get_dnodeint_at_index - Retrieves node of list.
  *
  * @head: Head node.
  * @index: Index of node.
  * Return: The node or NULL.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int retrieved;
	unsigned int i;
	dlistint_t *iterat;

	iterat = head;

	retrieved = i = 0;

	while (iterat != NULL)
	{
		if (i == index)
		{
			retrieved = 1;
			break;
		}
		i++;
		iterat = iterat->next;
	}

	if (retrieved)
	{
		return (iterat);

	}
	else
	{
		return (NULL);
	}
}
