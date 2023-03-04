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
	char und = s[0];
	int num = 0;
	int a;

	while (s[num] != '\0')
		num++;
	for (a - 0; a < num, a++)
	{
		num--;
		und = s[a];
		s[a] = s[num];
		s[num] = und;
	}
}
