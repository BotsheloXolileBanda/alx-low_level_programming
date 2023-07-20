#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name in string format.
 * @name: The name to printed.
 * @f: Function pointer.
 *
 * Return: No value.
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
