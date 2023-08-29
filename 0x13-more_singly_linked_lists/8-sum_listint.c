#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -Computes the sum of adding all components.
 *
 * @head: Beginner component pointer.
 * Return: Result of computation.
 */
int sum_listint(listint_t *head)
{
	int comput;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		comput = 0;

		while (head != NULL)
		{
			comput += head->n;
			head = head->next;
		}
		return (comput);
	}
}
