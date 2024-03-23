#include "lists.h"

/**
  * sum_dlistint - Returns sum of data in list.
  *
  * @head: Head node.
  * Return: Sum, or 0.
  */
int sum_dlistint(dlistint_t *head)
{
	int sumres = 0;

	while (head != NULL)
	{
		sumres += head->n;
		head = head->next;
	}

	return (sumres);
}
