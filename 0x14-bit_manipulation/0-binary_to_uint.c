#include "main.h"
int xatoi(const char *strin);
int xstrlen(const char *strin);
/**
  * binary_to_uint - Converts binary to int.
  *
  * @b: String with 0s and 1s.
  * Return: Unsigned int or 0.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, r, f;

	if (!b)
	{
		return (0);
	}
	else
	{
		x = xatoi(b);

		if (!x)
		{
			return (0);
		}
		else
		{
			r = 0;

			f = 1;

			do {
				r += ((x % 10) * f);
				f *= 2;
				x /= 10;
			} while (x > 0);

			return (r);
		}
	}
}
/**
  * xstrlen - Counts length of string.
  *
  * @strin: Particular string.
  * Return: The length.
  */
int xstrlen(const char *strin)
{
	int r = 0;

	while ((*strin + r) != '\0')
	{
		r++;
	}
	return (r);
}
/**
  * xatoi - Converts string to int.
  *
  * @strin: Particular strin.
  * Return: The new int.
  */
int xatoi(const char *strin)
{
	int r, num;

	r = 0;

	num = 0;

	while (strin[r] != '\0')
	{
		if ((*(strin + r) != 48) && (*(strin + r) != 49))
		{
			return (0);
		}
		num = num * 10 + strin[r] - '0';
		r++;
	}
	return (num);
}
