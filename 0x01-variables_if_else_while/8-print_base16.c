#include <stdio.h>


/**
  * main - Entry point
  *
  * Description - prints hexadecimal characters
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int k;
	int m;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
	}
	for (m = 97; m <= 104; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
