#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts node at place.
  *
  * @h: Pointer to head node.
  * @idx: Place to insert.
  * @n: Data of node.
  * Return: NULL or new node.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iterat, *newnde;
	unsigned int i;
	int found;

	found = 0;
	i = 0;
	iterat = *h;

	if (*h == NULL)
	{
		return (NULL);
	}
	else
	{
		newnde = malloc(sizeof(dlistint_t));

		if (!newnde)
		{
			return (NULL);
		}
		else
		{
			newnde->n = n;
			
			while (iterat != NULL)
			{
				if (i == idx)
				{
					found = 1;
					break;
				}
				i++;
				iterat = iterat->next;
			}
			if (found)
			{
				newnde->next = iterat->next;
				newnde->prev = iterat;
				iterat->next = newnde;
				return (newnde);
			}
			else
			{
				free(newnde);
				return (NULL);
			}
		}
	}
}
