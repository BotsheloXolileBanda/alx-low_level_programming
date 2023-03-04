#include "main.h"


/**
  * reverse_array - Reverses content of array
  *
  * @a: array inputted
  *
  * @n: number of elements of array
  *
  * Return: Void
  */
void reverse_array(int *a, int n)
{
	int b;
	int l;

	for (b = 0; b < n--; b++)
	{
		l = a[b];
		a[b] = a[n];
		a[n] = l;
	}
}
