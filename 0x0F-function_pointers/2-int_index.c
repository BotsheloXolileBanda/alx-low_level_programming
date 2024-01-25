#include "function_pointers.h"

/**
  * int_index - Searches for a number.
  *
  * @array: Input array.
  * @size: The length of the array.
  * @cmp: Compare function.
  * Return: The index found.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			if ((*cmp)(array[r]))
			{
				return (r);
			}
		}
	}
	return (-1);
}
