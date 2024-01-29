#include "3-calc.h"

/**
  * get_op_func - Dtermines function to operate.
  *
  * @s: The operation.
  * @a: First operand.
  * @b: Second operand.
  * Return: Pointer to function.
  */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		else if (ops[i].op == NULL)
		{
			return (ops[i].f);
		}
	}
	return (ops[i].f);
}
