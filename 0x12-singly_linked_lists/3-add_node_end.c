#include "lists.h"

/**
  * add_node_end - Adds a node to a singly linked list towards the tail.
  *
  * @head: Pointer to the head node.
  * @str: One of the data values of the node.
  * Return: Pointer to the new node or NULL on failure.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *minted = malloc(sizeof(list_t));
	list_t *prev_minted = (*head);

	if (!minted)
	{
		return (NULL);
	}
	else
	{
		minted->str = strdup(str);
		minted->len = strlen(str);
		minted->next = NULL;

		if ((*head) == NULL)
		{
			(*head) = minted;
		}
		else
		{
			while (prev_minted->next != NULL)
			{
				prev_minted = prev_minted->next;
			}
			prev_minted->next = minted;
		}
		return (minted);
	}
}
