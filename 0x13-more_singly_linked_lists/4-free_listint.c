#include "lists.h"

/**
  * free_listint - Deallocates memory for all nodes of list.
  *
  * @head: Pointer to first node.
  * Return: No value.
  */
void free_listint(listint_t *head)
{
	listint_t *tmphed;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{
			tmphed = head;
			head = head->next;
			free(tmphed);
		}
	}
}
