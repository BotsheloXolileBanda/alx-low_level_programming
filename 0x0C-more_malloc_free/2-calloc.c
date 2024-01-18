#include "main.h"

/**
  * _calloc - An implementation of calloc.
  *
  * @nmemb: Block count.
  * @size: Size of each block.
  * Return: Void pointer or NULL.
  */
void *_calloc(size_t nmemb, size_t size)
{
	size_t r;
	char *calloced;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		calloced = malloc(sizeof (*calloced) * (nmemb * size));
		if (!calloced)
		{
			return (NULL);
		}
		else
		{
			for (r = 0; r < (nmemb * size); r++)
			{
				calloced[r] = 0;
			}
			return (calloced);
		}
	}
}
