#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates a block of memory and exits on failure.
 * @b: The size of the memory.
 *
 * Return: A pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	else
	{
		return (pointer);
	}
}
