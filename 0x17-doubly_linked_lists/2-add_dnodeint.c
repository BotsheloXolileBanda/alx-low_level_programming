#include "lists.h"

/**
  * add_dnodeint - Adds a node at beginning of list.
  *
  * @head: Pointer to head node pointer.
  * @n: Data of new node.
  * Return: New node or NULL on failure.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newone;

	newone = malloc(sizeof(dlistint_t));

	if (!newone)
	{
		return (NULL);
	}
	newone->n = n;
	newone->prev = NULL;
	if (*head == NULL)
	{
		newone->next = NULL;
		*head = newone;

		return (newone);
	}
	else
	{
		newone->next = *head;
		(*head)->prev = newone;
		*head = newone;

		return (newone);
	}
}
