#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the product of two arguemnts passed to the program.
 *
 * @argc: Integer holding the count of arguments passed to the program.
 * @argv: Array of strings passed as arguments to the program.
 *
 * Return: A value of 0 for success.
 */
int main(int argc, char *argv[])
{
	int product;

	if ((argc == 1) || (argc > 3))
	{
		printf("Error\n");
	}
	else
	{
		product = (atoi)(argv[1]) * (atoi)(argv[2]);

		printf("%d\n", product);
	}
	return (0);
}
