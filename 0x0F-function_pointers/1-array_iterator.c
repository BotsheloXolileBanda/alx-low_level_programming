#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Prints an array.
 * @array: The one to print.
 * @size: The number of elements it has.
 * @action: Function pointer.
 *
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
