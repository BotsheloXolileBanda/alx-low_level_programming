#include "function_pointers.h"

/**
  * print_name - Prints name through call back.
  *
  * @name: Name to print.
  * @f: Function pointer.
  * Return: No value.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
