#include "lists.h"

/**
  * sum_listsint - Returns the sum of data in list.
  *
  * @head: Data to sum.
  * Return: The sum or 0.
  */
int sum_listint(listint_t *head)
{
	int ressum;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		ressum = 0;

		while (head != NULL)
		{
			ressum += head->n;
			head = head->next;
		}
		return (ressum);
	}
}
