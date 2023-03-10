#include "main.h"


/**
  * factorial - Pirnts the factorial of a number
  *
  * @n: Number whose factorial will be returned
  *
  * Return: Factorial in int form
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
