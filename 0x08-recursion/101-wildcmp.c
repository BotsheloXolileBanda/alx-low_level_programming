#include "main.h"

/**
  * wildcmp - Compares two strings
  *
  * @s1: First string
  *
  * @s2: Second string
  *
  * Return: 1 if identical and 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == s2[i])
	{
		return ((1) + wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

