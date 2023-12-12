#include "lists.h"

/**
  * add_nodeint - Adds a node at the beginning of a list.
  *
  * @head: Pointer to head node.
  * @n: Value to put in the node.
  * Return: Pointer to the node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *freshestnode =  malloc(sizeof(listint_t));

	if (!freshestnode)
	{
		return (NULL);
	}
	else
	{
		freshestnode->n = n;
		freshestnode->next = (*head);

		(*head) = freshestnode;
		return (freshestnode);
	}
}
