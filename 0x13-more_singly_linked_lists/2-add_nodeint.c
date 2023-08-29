#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - Creates and inserts a component at the start of node.
 *
 * @head: A pointer to the beginning of the components.
 * @n: The value part of the list.
 * Return: The fresh component.
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *ltst = malloc(sizeof(listint_t));

	if (ltst == NULL)
	{
		return (NULL);
	}
	else
	{
		ltst->n = n;
		ltst->next = *head;

		*head = ltst;
		return (ltst);
	}
}
