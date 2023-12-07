#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a singly linked list.
 *
 * @head: Pointer to the head node.
 * @str: The string to put in the node as data.
 * Return: A pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *minted = malloc(sizeof(list_t));

	if (!minted)
	{
		return (NULL);
	}
	else
	{
		minted->str = strdup(str);
		minted->next = (*head);
		(*head) = minted;
		return (minted);
	}
}
