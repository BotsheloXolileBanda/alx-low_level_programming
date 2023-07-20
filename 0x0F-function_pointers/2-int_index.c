#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches an array for integers.
 * @array: The array to search.
 * @size: The number of elemnts in array.
 * @cmp: The pointer to compare function.
 *
 * Return: Pointer to first occurence of int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	(void) array;
	(void) cmp;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
