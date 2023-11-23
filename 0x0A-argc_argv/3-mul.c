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
	int res;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		res = argv[1] * argv[2];
		return (res);
	}
}
