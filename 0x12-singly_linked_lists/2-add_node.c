#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - Adds a node att the start of  the current list.
 *
 * @head: Head node
 * @str: The string to be inputted.
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s freshnode = malloc(sizeof(list_t));

	if (freshnode == NULL)
	{
		return (NULL);
	}
	else
	{
		(*freshnode).str = strdup(str);
		(*freshnode).next = *head;

		*head = freshnode;

		return (freshnode);
	}
}
