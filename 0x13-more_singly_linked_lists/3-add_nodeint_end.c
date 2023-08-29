#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - This function inserts a component at the end of a list.
 *
 * @head: A pointer to the beginner component.
 * @n: A variable holding the value.
 * Return: A pointer to the newly created component.
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *freshend;

	listint_t *tprar;

	if (*head == NULL)
	{
		freshend = malloc(sizeof(listint_t));
		if (freshend == NULL)
		{
			return (NULL);
		}
		else
		{
			freshend->n = n;
			freshend->next = NULL;

			*head = freshend;

			return (freshend);
		}
	}
	else
	{
		tprar = *head;

		while (tprar->next != NULL)
		{
			tprar = tprar->next;
		}

		freshend = malloc(sizeof(listint_t));

		if (freshend == NULL)
		{
			return (NULL);
		}
		else
		{
			freshend->n = n;
			freshend->next = NULL;

			(tprar)->next = freshend;
			return (freshend);
		}
	}
}
