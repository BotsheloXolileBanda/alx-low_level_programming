#include "main.h"

/**
  * clear_bit - Sets a bit to 0.
  *
  * @n: The number to modify.
  * @index: The bit to set.
  * Return: 1 for success, -1 otherwise.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int msk, mssk;

	msk = 1 << index;

	mssk = ~msk;

	*n = (*n & mssk);

	if (*n)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
