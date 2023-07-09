#include <stdio.h>
#include <stdlib.h>

/**
 * main - Determines the minimum number of coins to make up change.
 *
 * @argc: Counter for number of arguments passed to progam.
 * @argv: The strings passed to the program.
 *
 * Return: A value of 0 for negative inputs and 1 for not 1 input.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if ((atoi)(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	return (0);
}
