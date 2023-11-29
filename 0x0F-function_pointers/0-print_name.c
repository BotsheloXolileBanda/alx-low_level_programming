#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Executes a function printing a series of characters.
 *
 * @name: An input to the function.
 * @f: Pointer to the function.
 * Return: No value.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
