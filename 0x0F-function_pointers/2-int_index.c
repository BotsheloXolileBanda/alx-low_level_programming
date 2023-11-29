#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - Implements a function that searches for an int.
  *
  * @array: The given array.
  * @size: The size of the array.
  * @cmp: Pointer to operator function.
  * Return: -1 on failure or index on success.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (size <= 0)
	{
		return (-1);
	}
	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
		{
			return (r);
		}
	}
	return (-1);
}
