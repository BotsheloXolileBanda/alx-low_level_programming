#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Removes beginner component of list.
 *
 * @head: The beginner component pointer.
 * Return: Contents of beginner component.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *del;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		num = (*head)->n;

		del = *head;

		*head = (*head)->next;

		free(del);

		return (num);
	}
}
