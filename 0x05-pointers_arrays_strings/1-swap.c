#include "main.h"


/**
  * swap_int - swaps values of two integers
  *
  * @a: Integer to be swapped
  *
  * @b: Integer to be swapped
  *
  * Return: Void
  *
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
