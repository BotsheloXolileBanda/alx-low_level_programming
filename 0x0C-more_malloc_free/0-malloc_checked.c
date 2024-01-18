#include "main.h"

/**
  * malloc_checked - Allocates memory using malloc.
  *
  * @b: The number of bytes to allocate.
  * Return: A void pointer or NULL.
  */
void *malloc_checked(unsigned int b)
{
	void *malloced = malloc(b);

	if (!malloced)
	{
		exit(98);
	}
	else
	{
		return (malloced);
	}
}
