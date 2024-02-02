#include "lists.h"

/**
  * add_node_end - Addsa node at the tail of a list.
  *
  * @h: Pointer to head node.
  * @str: The string to assign to node.
  * Return: New node or NULL.
  */
list_t *add_node_end(list_t **h, const char *str)
{
	list_t *node;
	list_t *added = malloc(sizeof(list_t));

	if (!added)
	{
		return (NULL);
	}
	else
	{
		added->str = strdup(str);
		added->len = _strlen(str);
		added->next = NULL;

		if (*h == NULL)
		{
			*h = added;
		}
		else
		{
			node = *h;

			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = added;
		}
		return (added);
	}
}int _strlen(const char *_str)
{
	int r = 0;

	while (*(_str + r) != '\0')
	{
		r++;
	}
	return (r);
}
