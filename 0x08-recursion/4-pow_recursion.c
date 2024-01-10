#include "main.h"

/**
 * _pow_recursion - Implements pow using recursion.
 *
 * @x: The base.
 * @y: The power.
 * Return: Reslt of computation.
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
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
