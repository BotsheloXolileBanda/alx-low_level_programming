#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_listint2 - Subjects a list to free.
 *
 * @head: Pointer to the beginner component.
 * Return: No value.
 */
void free_listint2(listint_t **head)
{
	listint_t *shrt;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			shrt = *head;
			*head = (*head)->next;
			free(shrt);
		}
		*head = NULL;
	}
}
