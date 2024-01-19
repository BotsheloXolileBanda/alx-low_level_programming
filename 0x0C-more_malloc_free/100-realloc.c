#include "main.h"

/**
  * realloc - Adjust the size of alloced memory.
  *
  * @ptr: Pointer in question.
  * @old_size: Old size of memory.
  * @new_size: New size of memory.
  * Return: Pointer or NULL.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem;
	unsigned int r;

	if (new_size > old_size)
	{
		newmem = malloc(sizeof(char) * (new_size));
		if (!newmem)
		{
			return (NULL);
		}
		else
		{
			for (r = 0; r < (old_size); r++)
			{
				newmem[r] = *((char *)ptr + r);
			}
			return (newmem);
		}
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (ptr == NULL && new_size)
	{
		newmem = malloc(new_size);
		if (!newmem)
		{
			return (NULL);
		}
		return (newmem);
	}
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		newmem = malloc(sizeof(char *) * (new_size));
		if (!newmem)
		{
			return (NULL);
		}
		else
		{
			for (r = 0; r < new_size; r++)
			{
				newmem[r] = *((char *)ptr + r);
			}
			return (newmem);
		}
	}
}
