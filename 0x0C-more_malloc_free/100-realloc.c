#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * realloc -Resizes the memory previously alloated.
 *
 * @ptr: The original pointer.
 * @old_size: The magnitude of og pointer.
 * @new_size: The magnitude of new pointer.
 * Return: Pointer of unknown type.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ourptr;
	char *tmpptr;
	unsigned int r;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);

		ptr = NULL;

		return (NULL);
	}
	else if (ptr == NULL)
	{
		ourptr = malloc(new_size);

		if (ourptr == NULL)
		{
			return (NULL);
		}
		return (ourptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		if (new_size > old_size)
		{
			tmpptr = malloc(old_size);

			if (tmpptr == NULL)
			{
				return (NULL);
			}
			ourptr = malloc(new_size);

			r = 0;

			while (r < new_size)
			{
				*(ourptr + r) = *(tmpptr + r);
				r++;
			}
		}
		return (ourptr);
	}
}
