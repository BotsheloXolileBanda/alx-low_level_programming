#include <stdio.h>


/**
  * main - Entry point
  *
  * Description: Prints numbers from 0 to 100 except a few
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int a, b;

	b = 100;
	for (a = 1; a <= b; a++)
	{
		if ((a % 15) == 0)
			printf(" FizzBuzz");
		else if ((a % 3) == 0)
			printf(" Fizz");
		else if ((a % 5) == 0)
			printf(" Buzz");
		else
			printf(" %d", a);
	}
	printf("\n");
	return (0);
}

