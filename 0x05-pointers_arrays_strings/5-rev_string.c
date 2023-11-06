#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to reverse.
 * Return: No value.
 */
void rev_string(char *s)
{
	int k;

	k = 0;

	while (*(s + k) != '\0')
	{
		k++;
	}

	char dup[k];

