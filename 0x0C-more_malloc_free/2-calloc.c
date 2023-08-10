#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb times size proportion.
 *
 * @nmemb: The number of elements to create.
 * @size: The magnitude of each element.
 * Return: A pointer of unknown type to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *twodimary;
	unsigned int r;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		twodimary = malloc(sizeof(char) * (nmemb * size));

		if (twodimary == NULL)
		{
			return (NULL);
		}
		else
		{
			r = 0;

			while (r < (nmemb * size))
			{
				*(twodimary + r) = 0;
				r++;
			}
			return (twodimary);
		}
	}
}
