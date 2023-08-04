#include <stdio.h>
#include "main.h"

/**
  * _islower - checks for lowercase alphabets.
  *
  * @c: Letter to be checked
  *
  * Return: 1 if successful and 0 otherwise.
  */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
