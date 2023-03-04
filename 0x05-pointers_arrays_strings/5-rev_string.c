#include "main.h"

/**
  * rev_string - Reverses a string
  *
  * @s: String to be reversed
  *
  * Return: Void
  */
void rev_string(char *s)
{
	char rev = S[0];
	int counter = 0;
	int i;

	while (S[counter] != '\0')
		counter++;
	for (i = 0; i < counter, i++)
	{
		counter--;
		rev = S[i];
		S[i] = S[counter];
		S[counter] = rev;
	}
}
