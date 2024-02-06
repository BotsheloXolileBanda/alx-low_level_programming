#include "lists.h"

/**
  * add_nodeint_end - Pushes a node at end of list.
  *
  * @head: Pointer to head node.
  * @n: Initialiser for node.
  * Return: Pointer to new node or NULL.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *to_push;
	listint_t *trvs;

	to_push = malloc(sizeof(listint_t));

	if (!to_push)
	{
		return (NULL);
	}
	else
	{
		to_push->n = n;
		to_push->next = NULL;

		if (*head == NULL)
		{
			*head = to_push;
		}
		else
		{
			trvs = *head;

			while (trvs->next != NULL)
			{
				trvs = trvs->next;
			}
			trvs->next = to_push;
		}
		return (to_push);
	}
}
