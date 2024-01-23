#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - Creates a new struct pointer variable.
  *
  * @name: The struct field.
  * @age: The struct field.
  * @owner: The struct field.
  * Return: Pointer to the new variable.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *latestdog = malloc(sizeof(dog_t));

	if (!latestdog)
	{
		return (NULL);
	}
	else
	{
		latestdog->name = name;
		latestdog->age = age;
		latestdog->owner = owner;
		return (latestdog);
	}
}
