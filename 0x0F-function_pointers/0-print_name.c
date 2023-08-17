#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Outputs a string using given function.
 *
 * @name: String to output.
 * @f: Pointer to given function.
 * Return: No value.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
