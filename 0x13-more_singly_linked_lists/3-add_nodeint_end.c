#include "lists.h"

/**
  * add_nodeint_end - Adds a node of a list at the tail.
  *
  * @head: Pointer to the head node.
  * @n: Value of the node.
  * Return: The new node pointer.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *freshestnode, *prevfreshest;

	freshestnode = malloc(sizeof(listint_t));
	if (!freshestnode)
	{
		return (NULL);
	}
	else
	{
		freshestnode->n = n;
		freshestnode->next = NULL;

		prevfreshest = (*head);

		if ((*head) == NULL)
		{
			(*head) = freshestnode;
			return (freshestnode);
		}
		else
		{
			while (prevfreshest->next != NULL)
			{
				prevfreshest = prevfreshest->next;
			}
			prevfreshest->next = freshestnode;
			return (freshestnode);
		}
	}
}
