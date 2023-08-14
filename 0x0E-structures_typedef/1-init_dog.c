#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialises an already defined struct called dog.
 *
 * @d: The pointer to be used to access the variables.
 * @name: The dog identifier.
 * @age: The float variable for how old the dog is.
 * @owner: String for the owner variable.
 * Return: No value.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
