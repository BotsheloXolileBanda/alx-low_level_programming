#include "function_pointers.h"
#include <stdio.h>

void printi(char *bull)
{
	printf("%s\n", bull);
}
int main(void)
{
	print_name("king", printi);
	return (0);
}
