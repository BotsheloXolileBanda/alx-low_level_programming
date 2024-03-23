#include "lists.h"

/**
  * add_dnodeint_end - Adds node at end of doubly linked list.
  *
  * @head: Pointer to head.
  * @n: Data of node.
  * Return: New node or NULL.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnde, *iterat;

	newnde = malloc(sizeof(dlistint_t));

	if (!newnde)
	{
		return (NULL);
	}
	else
	{
		newnde->n = n;
		newnde->next = NULL;

		if (*head == NULL)
		{
			newnde->prev = NULL;
			*head = newnde;

			return (newnde);
		}
		else
		{
			iterat = *head;

			while (iterat->next != NULL)
			{
				iterat = iterat->next;
			}
			iterat->next = newnde;
			newnde->prev = iterat;

			return (newnde);
		}
	}
}
