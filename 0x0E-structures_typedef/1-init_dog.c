#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - Initialises a struct.
  *
  * @d: The pointer to the struct.
  * @name: Name field.
  * @age: Age field.
  * @owner: Owner field.
  * Return: No value.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (!d)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
