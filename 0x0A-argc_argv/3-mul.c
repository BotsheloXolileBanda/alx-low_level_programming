#include "main.h"

/**
  * main - Computes the product of two numbers.
  *
  * @argc: Argument counter.
  * @argv: THe arguments strings.
  * Return: 0 on success and non zero otherwise.
  */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
