#include <stdio.h>


/**
  * main - Entry point
  *
  * Description - Prints alphabets in reverse
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int k = 122;

	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
