#include <stdio.h>


/**
  * main - Entry point
  *
  * Description prints numbers
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int o;

	for (o = 48; 0 <= 57; o++)
	{
		putchar(o);
	if (o == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

