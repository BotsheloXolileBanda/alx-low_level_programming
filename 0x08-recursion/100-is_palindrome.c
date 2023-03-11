#include "main.h"

/**
  * is_palindrome - Checks whether a string is a palindrome
  *
  * @s: String to be checked
  *
  * Return: 1 if palindrome and 0 otherwise
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1) + _strlen_recursion(s + 1));
	}
}
