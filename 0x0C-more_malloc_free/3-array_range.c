#include "main.h"

/**
  * array_range - Creates an array of integers.
  *
  * @min: The minimum of the array.
  * @max: The maximum of the array.
  * Return: A pointer to the start of the array.
  */
int *array_range(int min, int max)
{
	int r;
	int *intarray;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	intarray = malloc(sizeof(*intarray) * (range + 1));
	if (!intarray)
	{
		return (NULL);
	}
	for (r = 0; r < (range + 1); r++)
	{
		*(intarray + r) = min;
		min += 1;
	}
	return (intarray);
}
