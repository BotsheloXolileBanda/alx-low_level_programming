#include "lists.h"

/**
  * free_list - Frees a singly linked list.
  *
  * @head: Head node.
  * Return: No value.
  */
void free_list(list_t *h)
{
	list_t *node = h;
	list_t *freef;

	while (node->next != NULL)
	{
		free(node->str);
		freef = node;
		free(freef);
		node = node->next;
	}
}
