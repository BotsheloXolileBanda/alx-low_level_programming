#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * Return: 0 for equality, above it for greater and less for less.
 */
int _strcmp(char *s1, char *s2)
{
	int k, indi;

	k = 0;

	indi = 0;

	while (*(s1 + k))
	{
		if (*(s1 + k) < *(s2 + k))
		{
			indi = -15;
			break;
		}
		else if (*(s1 + k) > *(s2 + k))
		{
			indi = 15;
			break;
		}
		else
		{
			k++;
		}
	}
	return (indi);
}
