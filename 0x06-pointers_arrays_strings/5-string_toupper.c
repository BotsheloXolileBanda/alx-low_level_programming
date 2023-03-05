#include "main.h"


/**
  * string_toupper - changes lowercase characters of a string to uppercase
  *
  * @n: inputted string
  *
  * Return: Uppercase letters
  */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\n')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
