#include "main.h"

/**
 * _strncpy - Copies string 2 to string 1, subject to n.
 * @dest: First string.
 * @src: Second string.
 * @n: src byte limiter.
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q, r, s;

	q = 0;

	while (*(dest + q) != '\0')
		q++;
	r  = 0;

	while (*(src + r) != '\0')
		r++;
	s = 0;

	if (n <= r)
	{
		while (s < n)
		{
			*(dest + s) = *(src + s);
				s++;
		}
	}
	else
	{
		while (s < r)
		{
			*(dest + s) = *(src + s);
			s++;
		}
		*(dest + q) = '\0';
	}
	return (dest);
}
