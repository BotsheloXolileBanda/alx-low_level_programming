#include "main.h"

/**
 * swap_int - Swaps two sets of integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: No value.
 */
void swap_int(int *a, int *b)
{
	int r, s;

	r = *a;

	s = *b;

	*a = s;

	*b = r;
}
