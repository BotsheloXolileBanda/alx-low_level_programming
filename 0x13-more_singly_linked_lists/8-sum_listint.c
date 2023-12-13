#include "lists.h"

/**
  * sum_listint - Computes the sum of data in list.
  * @head: Pointer to the starting node.
  *
  * Return: The sum or 0.
  */
int sum_listint(listint_t *head)
{
	int r = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			r += head->n;
			head = head->next;
		}
		return (r);
	}
}
