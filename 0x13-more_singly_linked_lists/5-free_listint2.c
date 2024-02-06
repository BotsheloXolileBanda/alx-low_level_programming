#include "lists.h"

/**
  * free_listint2 - Dealloates memory for a list.
  *
  * @head: Pointer to first node.
  * Return: No value.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmphdp;

	while (*head != NULL)
	{
		tmphdp = *head;
		*head = (*head)->next;
		free(tmphdp);
	}
	head = NULL;
}
