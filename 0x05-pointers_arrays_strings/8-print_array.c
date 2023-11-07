#include "main.h"

/**
 * print_array- Prints contents of array.
 *
 * @a: The array.
 * @n: The elements.
 * Return: No value.
 */
void print_array(int *a, int n)
{
	int k;

	k = 0;

	while (k < n)
	{
		printf("%d", *(a + k));
		if (k == (n - 1))
		{
			k++;
			continue;
		}
		printf(", ");
		k++;
	}
	printf("\n");
}
