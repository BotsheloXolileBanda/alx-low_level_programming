#include "lists.h"

/**
  * free_dlistint - Frees a doubly linked list.
  *
  * @head: Pointer to head node.
  * Return: No value.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterat;

	while (head != NULL)
	{
		iterat = head;
		head = head->next;
		free(iterat);
	}
}
