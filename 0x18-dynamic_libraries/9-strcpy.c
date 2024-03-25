#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int k;

	k = 0;

	while (*(src + k) != '\0')
	{
		*(dest + k) = *(src + k);
		k++;
	}
	return (dest);
}
