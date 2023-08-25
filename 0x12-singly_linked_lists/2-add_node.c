#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_node - Inserts or creates a node at the beginning of the list.
 * @head: A pointer to a beginner node.
 * @str: The variable with which to initialise the node.
 *
 * Return: A pointer to the fresh node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *latestnde;
	unsigned int r;

	r = 0;

	latestnde = malloc(sizeof(list_t));

	if (latestnde == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + r) != '\0')
		{
			r++;
		}
		latestnde->str = strdup(str);
		latestnde->len = r;
		latestnde->next = *head;

		*head = latestnde;

		return (latestnde);
	}
}
