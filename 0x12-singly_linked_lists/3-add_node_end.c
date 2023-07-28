#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a list.
 *
 * @head: Head node.
 * @str: String to be inputted.
 * Return: Pointer to neew node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlastnode = malloc(sizeof(list_t));

	if (newlastnode == NULL)
	{
		return (NULL);
	}
	else
	{
		(*newlastnode).str = strdup(str);
		(*newlastnode).next = NULL;

		if (*head == NULL)
		{
			*head = newlastnode;
		}
		else
		{
			list_t *oglastnode = *head;

			while ((*oglastnode).next != NULL)
			{
				oglastnode = (*oglastnode).next;
			}
			(*oglastnode).next = newlastnode;
		}
		return (newlastnode);
	}
}
