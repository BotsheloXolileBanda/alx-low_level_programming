#include "main.h"


/**
  * flip_bits - Counts the different bits of two numbers.
  *
  * @n: First number.
  * @m: Second number.
  * Return: The number counted.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bts = 0;

	int res = (n ^ m);

	if (res == 0)
	{
		return (0);
	}
	else
	{
		while (res)
		{
			bts++;
			res = res & (res - 1);
		}
		return (bts);
	}
}
