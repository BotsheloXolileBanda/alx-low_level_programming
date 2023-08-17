#include <stdio.h>
#include "function_pointers.h"

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
