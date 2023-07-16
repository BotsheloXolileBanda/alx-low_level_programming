#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates n blocks of size byte memory and returns a pointer.
 * @nmemb: The block of memory count.
 * @size: The size of each block in bytes.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int r;

	if ((size == 0) || (nmemb == 0))
	{
		return (NULL);
	}
	else
	{
		block = malloc(nmemb * size);

		if (block == NULL)
		{
			return (NULL);
		}
		else
		{
			r = 0;

			while (r < (nmemb *size))
			{
				*(block + r) = 0;
				r++;
			}
			return (block);
		}
	}
}
