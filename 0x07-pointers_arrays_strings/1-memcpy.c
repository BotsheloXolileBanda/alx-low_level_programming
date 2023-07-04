#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - Copies memory from one block to another.
 * @dest: Pointer to which memory will be copied.
 * @src: Pointer from which memory will be copied.
 * @n: Limiter bytes.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	dest = malloc(sizeof(src) * n);

	j = 0;

	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
