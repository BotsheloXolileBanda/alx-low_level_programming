#include <stdlib.h>
#include <stdio.h>

/**
 * main - Computes the product of two inputs and returns it.
 *
 * @argc: The counter for the number of args passed in int form.
 * @argv: A pointer to the array holding inputs passed.
 * Return: The result of above mentioned computation.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int productofmul = (atoi)(argv[1]) * (atoi)(argv[2]);

		printf("%d\n", productofmul);
		return (0);
	}
}
