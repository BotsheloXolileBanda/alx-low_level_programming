#include "lists.h"

/**
  * pop_listint - Deletes the start of a list.
  *
  * @head: Head node.
  * Return: Content of head node.
  */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int ncpy;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		hold = (*head)->next;
		ncpy = (*head)->n;
		free(*head);
		*head = hold;

		return (ncpy);
	}
}
