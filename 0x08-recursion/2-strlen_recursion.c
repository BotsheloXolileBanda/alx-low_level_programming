#include "main.h"


/**
  * _strlen_recursion - Returns the lenth of a string using recurision
  *
  * @s: Input string
  *
  * Return: The lenth of inputted string in integer form
  */
int _strlen_recursion(char *s)
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
