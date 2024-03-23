#include "lists.h"

/**
  * delete_dnodeint_at_index - Removes a node from a list.
  *
  * @head: Pointer to head node.
  * @index: Address of node to remove.
  * Return: 1 on success, -1 on error.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	int found;
	dlistint_t *iterat;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		iterat = *head;
		found = count = 0;

		while (iterat != NULL)
		{
			if (count == index)
			{
				found = 1;
				break;
			}
			count++;
			iterat = iterat->next;
		}
		if (found)
		{
			(iterat->prev)->next = iterat->next;
			(iterat->next)->prev = iterat->prev;
			free(iterat);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}
