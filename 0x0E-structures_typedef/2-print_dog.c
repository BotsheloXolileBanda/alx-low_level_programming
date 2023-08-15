#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Outputs the values of struct dog.
 *
 * @d: Pointer giving access to the variables.
 * Return: No value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else{
		if (((*d).name) == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if ((*d).age == 0.0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %.6f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
