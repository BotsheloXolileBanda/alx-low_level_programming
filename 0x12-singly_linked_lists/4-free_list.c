#include "lists.h"

/**
  * free_list - Frees a singly linked list.
  *
  * @head: The head node where the freeing starts.
  * Return: No value.
  */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{
			free(head);
			free(head->str);
			head = head->next;
		}
	}
}
