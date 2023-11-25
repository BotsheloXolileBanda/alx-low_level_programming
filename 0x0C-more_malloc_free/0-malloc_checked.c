#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);

	if (!allocated)
	{
		exit(98);
	}
	else
	{
		return (allocated);
	}
}
