#include "lists.h"

/**
  * free_listint2 - Frees a list but sets head to NULL.
  *
  * @head: Pointer to head node.
  * Return: No value.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmpo;
	int r;

	r = 0;

	while ((*head) != NULL)
	{
		tmpo = (*head);
		(*head) = (*head)->next;
		free(tmpo);
		if (r == 0)
		{
			tmpo = NULL;
		}
	}
}
