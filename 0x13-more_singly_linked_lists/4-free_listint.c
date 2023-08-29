#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Subjects a node to the free function.
 *
 * @head: The beginner node component.
 * Return: No value.
 */
void free_listint(listint_t *head)
{
	listint_t *fr_nw;

	while (head != NULL)
	{
		fr_nw = head;
		free(fr_nw);
		head = head->next;
	}
}
