#include <stdlib.h>
#include <stdio.h>

/**
 * main - Computes the product of two numbers.
 *
 * @argc: The argument count.
 * @argv: The argument array.
 * Return: A value of 0.
 */
int main(int argc, char *argv[])
{
	int res, opone, optwo;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		opone = atoi(argv[1]);
		optwo = atoi(argv[2]);
		res = opone * optwo;
		printf("%d\n", res);
		return (0);
	}
}
