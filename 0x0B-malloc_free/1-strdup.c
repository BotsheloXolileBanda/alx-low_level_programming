#include "main.h"

/**
  * _strdup - Duplicates a string on the heap.
  *
  * @str: The string to duplicate.
  * Return: A pointer to the string or NULL.
  */
char *_strdup(char *str)
{
	char *dupped_str;
	int r, x;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		r = 0;

		while (*(str + r) != '\0')
		{
			r++;
		}
		dupped_str = malloc(sizeof(char) * (r + 1));

		if (!dupped_str)
		{
			return (NULL);
		}
		else
		{
		for (x = 0; x < r; x++)
		{
			dupped_str[x] = *(str + x);
		}
		dupped_str[x] = '\0';

		return (dupped_str);
		}
	}
}
