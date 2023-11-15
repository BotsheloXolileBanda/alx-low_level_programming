#include "main.h"

/**
 * _pow_recursion - Computes the power of a number.
 *
 * @x: The first number or base.
 * @y: The second number or exponent.
 * Return: The reult of the computation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
