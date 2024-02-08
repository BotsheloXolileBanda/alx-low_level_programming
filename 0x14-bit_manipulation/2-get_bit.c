#include "main.h"

/**
  * get_bit - Obtains the status of a bit at an index.
  *
  * @n: The number to check.
  * @index: Bit to check.
  * Return: 0, 1 or -1.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int msk = 1;

	int newn = n >> index;

	if (msk & newn)
	{
		return (1);
	}
	else if (!(msk &newn))
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
