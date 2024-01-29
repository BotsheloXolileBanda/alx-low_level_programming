#include "3-calc.h"

/**
 * main - Calls a calculator function.
 * 
 * @argc: Argument count.
 * @argv: Pointer to array of strings.
 * Return: 0 on succes, other number otherwise.
 */
int main(int argc, char *argv[])
{
	int g, aa, bb;

	aa = (atoi)(argv[1]);
	bb = (atoi)(argv[3]);

	printf("%d\n", argc);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	else if ((!strcmp(argv[2], "%") || !strcmp(argv[2], "/")) && (!aa || !bb))
	{
		printf("Error\n");
		return (100);
	}
	else
	{
		g = get_op_func(argv[2])(aa, bb);

		if (!g)
		{
			printf("Error\n");
			return (99);
		}
		else
		{
			printf("%d\n", g);
			return (0);
		}
	}
}
