#include "main.h"

/**
  * _strspn - Entry point
  *
  * @s: input value
  *
  * @accept: input
  *
  * Return: Always 0 (success)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, worth, test;

	worth = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				worth++;
				test = 1;
			}
		}
	}
}
