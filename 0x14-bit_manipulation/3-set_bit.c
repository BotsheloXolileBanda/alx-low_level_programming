#include "main.h"

/**
  * set_bit - Sets a bit to 1 in a number.
  *
  * @n: Number to change.
  * @index: Bit to change.
  * Return: The new number.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	int msk = 1 << index;

	*n = (*n | msk);

	if (*n)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
