#include "main.h"

/**
 * reverse_array - Reverses an array.
 * @a: Input array.
 * @n: Elements of array.
 *
 * Return: No value.
 */
void reverse_array(int *a, int n)
{
	int stor[1000];
	int c, d, e;

	c = 0;

	while (c < n)
	{
		stor[c] = *(a + c);
			c++;
	}
	d = n - 1;
	e = 0;

	while ((d >= 0) && (e < n))
	{
		*(a + e) = stor[d];
		e++;
		d--;
	}
}
