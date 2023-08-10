#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using a function called malloc.
 *
 * @b: The number of bytes to allocate in int form.
 * Return: A pointer of unknown type to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
