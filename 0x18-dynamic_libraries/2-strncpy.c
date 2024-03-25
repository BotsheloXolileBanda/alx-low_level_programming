#include "main.h"

/**
 * _strncpy - Copies a string to a memory, subject to n.
 *
 * @dest: memory receiving string.
 * @src: String to copy.
 * @n: Limiter.
 * Return: Pointer to new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q, t, x;

	for (q = 0; *(src + q) != '\0'; q++)
	{
	}
	if (q >= n)
	{
		for (t = 0; t < n; t++)
		{
			*(dest + t) = *(src + t);
		}
		return (dest);
	}
	else
	{
		for (t = 0; *(src + t) != '\0'; t++)
		{
			*(dest + t) = *(src + t);
		}
		for (x = 0; x < (n - q); x++)
		{
			*(dest + t++) = '\0';
		}
		return (dest);
	}
}
