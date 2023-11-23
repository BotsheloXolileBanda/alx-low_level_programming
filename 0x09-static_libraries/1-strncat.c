#include "main.h"

/**
 * _strncat - Concatenates two strings, subject to n.
 *
 * @dest: First string.
 * @src: Second string.
 * @n: Limiting byte.
 * Return: Pointer to new string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int q, t, s;

	for (q = 0; *(src + q) != '\0'; q++)
	{
	}
	if (n < q)
	{
		for (t = 0; *(dest + t) != '\0'; t++)
		{
		}
		for (s = 0; s < n; s++)
		{
			*(dest + t++) = *(src + s);
		}
		*(dest + t) = '\0';
		return (dest);
	}
	else
	{
		for (t = 0; *(dest + t) != '\0'; t++)
		{
		}
		for (s = 0; *(src + s) != '\0'; s++)
		{
			*(dest + t++) = *(src + s);
		}
		*(dest + t) = '\0';
		return (dest);
	}
}
