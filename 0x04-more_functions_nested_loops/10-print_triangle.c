#include <stdio.h>


/**
  * print_triangle - Prints a triange
  *
  * @size: Size of triangle
  *
  * Return: Void
  *
  */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		printf("\n");
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 0; b <= (size - a); b++)
		{
			printf(" ");
		}
		for (b = 0; b < a; b++)
		{
			printf("#");
		}
		printf("\n");
	}
}
