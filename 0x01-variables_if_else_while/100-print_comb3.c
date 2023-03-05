#include <stdio.h>
#include <stlib>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; d <= '9'; p++)
		{
			if (p != d)
			{
				_putchar(p);
				_putchar(d);
				if (d == "8' && p == '9')
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
