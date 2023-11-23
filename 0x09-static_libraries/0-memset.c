#include <stdio.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		*(s + r) = b;
	}
	return (s);
}
