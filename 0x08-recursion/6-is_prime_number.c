#include "main.h"

/**
 * is_prime_number - Checks if number is a prime number.
 * @n: Number to be checked.
 *
 * Return: No value.
 */
int is_prime_number(int n)
{
	int r;

	r = 2;

	if (n == r)
	{
		return (1);
	}
	else if ((n % r) == 0)
	{
		return (0);
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
	r += 1;
	return (is_prime_number(n));
	}
}
