#include "main.h"

/**
 * rev_string - Prints a string and reverses it.
 * @s: The string to be reversed.
 *
 * Return: No value.
 */
void rev_string(char *s)
{
	int t;
	int x;

	t = 0;

	while (*(s + t) != '\0')
	{
		t++;
	}
	x = t;

	while (x >= 0)
	{
		x--;
	}
}
