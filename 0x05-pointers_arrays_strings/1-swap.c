#include "main.h"

/**
 * swap_int- Swaps the values of the two parameters.
 *
 * @a: First parameter.
 * @b: Second parameter.
 * return: No value.
 */
void swap_int(int *a, int *b)
{
	int j;

	j = a;
	a = b;
	b = j;
}
