#include "main.h"
#include <stdio.h>

/**
  * print_array - prints number of elements of array
  *
  * @a: the inpuuted array
  *
  * @n: The elements of the array
  *
  * Return: Void
  */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
