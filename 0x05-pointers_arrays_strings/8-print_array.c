#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints out n elements of an array.
 * @a: Arry object
 * @n: Elements of the array.
 *
 * Return: No value.
 */
void print_array(int *a, int n)
{
	int r;

	r = 0;

	while (r < n)
	{
		if (r < (n - 1))
		{
			printf("%d, ", *(a + r));
		}
		else
		{
			printf("%d", *(a + r));
		}
		r++;
	}
	printf("\n");
}
