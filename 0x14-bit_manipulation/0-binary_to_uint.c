#include "main.h"

/**
 * binary_to_uint - Converts one form of number to another.
 *
 * @b: Pointer storing the number.
 *
 * Return: The computed value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int leng, k, comput;

	int r;

	leng = 0;

	while (*(b + leng) != '\0')
	{
		leng++;
	}
	r = leng - 1;

	k = 1;

	comput = 0;

	while (r >= 0)
	{
		if (*(b + r) < 48 || *(b + r) > 57)
		{
			return (0);
		}
		comput += (*(b + r) - '0') * k;

		k *= 2;
		r--;
	}
	return (comput);
}
