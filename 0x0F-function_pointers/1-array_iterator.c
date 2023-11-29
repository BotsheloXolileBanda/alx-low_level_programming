#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function using function pointers.
 *
 * @array: Our specific array.
 * @size: The size of the array.
 * @action: The function pointer to operate.
 * Return: No value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	r = 0;

	while (r < size)
	{
		action(*(array + r));
		r++;
	}
}
