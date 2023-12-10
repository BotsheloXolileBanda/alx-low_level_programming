#include "lists.h"

/**
  * free_list - Frees a singly linked list.
  *
  * @head: The head node where the freeing starts.
  * Return: No value.
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
