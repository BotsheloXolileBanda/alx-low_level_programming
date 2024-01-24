#include "function_pointers.h"

/**
  * array_iterator - Modifies array elements.
  *
  * @array: Input array.
  * @action: Modifying function.
  * Return: No value.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
