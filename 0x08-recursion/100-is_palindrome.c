#include "main.h"
#include <string.h>

/**
  * is_palindrome - Checks whether a string is a palindrome
  *
  * @s: String to be checked
  *
  * Return: 1 if palindrome and 0 otherwise
  */
int is_palindrome(char *s)
{
	int i = strlen(s);

	int len = strlen(s) - (i + 1);

		if ((i + 1) == len || i == len)
		{ return (1);
		}
	else
	{
		return (0);
	}
}
