#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises struct dog type.
 * @*d: Pointer to struct.
 * @name: Dog identifier.
 * @age: Age of dog.
 * @owner: Owner name.
 *
 * Return: No value.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;

	(*d).age = age;

	(*d).owner = owner;
}
