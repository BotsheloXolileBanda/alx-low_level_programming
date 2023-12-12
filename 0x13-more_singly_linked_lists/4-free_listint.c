#include "lists.h"

/**
  * free_listint - Frees a list using the free func.
  *
  * @head: The head node pointer.
  * Return: No value.
  */
void free_listint(listint_t *head)
{
	listint_t *tmpo;

	while (head != NULL)
	{
		tmpo = head;
		head = head->next;
		free(tmpo);
	}
}
