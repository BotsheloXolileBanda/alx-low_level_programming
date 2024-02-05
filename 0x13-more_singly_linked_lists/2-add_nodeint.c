#include "lists.h"

/**
  * add_nodeint - Pushes a node at the start of a list.
  *
  * @head: Poiter to head node.
  * @n: Value of node.
  * Return: Pointer to new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *to_add = malloc(sizeof(listint_t));

	if (!to_add)
	{
		return (NULL);
	}
	else
	{
		to_add->n = n;
		to_add->next = *head;
		*head = to_add;

		return (to_add);
	}
}
