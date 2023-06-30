#include "main.h"

/**
 * _strncpy - Copies source string in n bytes to destination string.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Bytes source string is allowed to be copied to.
 *
 * Return: Pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w, x, y;

	w = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	y = 0;
	x = 0;

	if (n <= w)
	{
		while (x < n)
		{
			*(dest + x) = *(src + x);
			x++;
		}
	}
	else
	{
		while (y < w)
		{
			*(dest + y) = *(src + y);
			y++;
		}
		while (*(dest + y) != '\0')
		{
			y++;
		}
		*(dest + y) = '\0';
	}
	return (dest);
}
