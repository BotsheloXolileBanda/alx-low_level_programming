#include "main.h"

/**
 * _calloc - Allocates memory and fills it with 0s.
 *
 * @nmemb: The number of chuncks of memory.
 * @size: The number of bytes of each chunck.
 * Return: Pointer to the new memory or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newalloc;
	unsigned int r;

	if (!size || !nmemb)
	{
		return (NULL);
	}
	else
	{
		newalloc = malloc(sizeof(*newalloc) * (nmemb * size));
		if (!newalloc)
		{
			return (NULL);
		}
		for (r = 0; r < (nmemb * size); r++)
		{
			*(newalloc + r) = 0;
		}
		return (newalloc);
	}
}
