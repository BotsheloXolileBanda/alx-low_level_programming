#include "main.h"
#include <stdio.h>


/**
  * rot13 - Encodes text
  *
  * @s: Pointer to a string
  *
  * Return: *s
  *
  */
char *rot13(char *s)
{
	int a;
	int b;
	char info1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inforot[] "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == info1[b])
			{
				s[a] = inforot[b];
				break;
			}
		}
	}
	return (s);
}
