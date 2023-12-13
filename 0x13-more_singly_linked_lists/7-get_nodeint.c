#include "lists.h"

/**
  * get_nodeint_at_index - Reurns the node requested.
  *
  * @head: Start of the node.
  * @index: Poistion to return.
  * Return: That node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (head != NULL)
		{
			if (r == index)
			{
				break;
			}
			r++;
			head = head->next;
		}
		if (r == index)
		{
			return (head);
		}
		else
		{
			return (NULL);
		}
	}
}
