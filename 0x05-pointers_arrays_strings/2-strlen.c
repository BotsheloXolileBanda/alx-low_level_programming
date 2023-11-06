#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * 
 * @s: The string to compute.
 * return: The number of characters in a string.
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (*(s + k) != '\0')
	{
		k++;
	}
	return (k);
}
