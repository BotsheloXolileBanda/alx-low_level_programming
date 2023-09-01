#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Computes the equivalent of a binary in base 10.
 *
 * @b: Pointer to memory holding the binary value.
 * Return: The result of the computation.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int comput, bs, bint, s, r;
	int t, q, x, *binte, *tmpa;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		r = 0;

		while (*(b + r) != '\0')
		{
			/*if ((*(b + r) != 48) || (*(b + r) != 49))
			{
				return (0);
			}*/
			r++;
		}
		bint = atoi(b);

		s = 0;

		binte = malloc(sizeof(int) * r);

		if (binte == NULL)
		{
			return (0);
		}
		else
		{
			do
			{
				*(binte + s) = bint % 10;
				bint /= 10;
				s++; } while (bint > 0);
			bs = 1;

			t = s - 1;

			comput = 0;

			x = 0;

			tmpa = malloc(sizeof(int) * r);

			if (!tmpa)
			{
				return (0);
			}

			while (t >= 0)
			{
				*(tmpa + x) = *(binte + t);
				t--;
				x++;
			}

			q = x - 1;

			while (q >= 0)
			{
				comput += (*(tmpa + q)) * bs;
				q--;
				bs *= 2;
			}
			return (comput);
		}
	}
}
