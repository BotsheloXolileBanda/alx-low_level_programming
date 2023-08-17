#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Traverses through array members while function executing.
 *
 * @array: Input array.
 * @size: Length of our array to traverse.
 * @action: Our specific function to put into action.
 * Return: No value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	r = 0;

	while (r < size)
	{
		(*action)(*(array + r));
		r++;
	}
}
