#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates and declares a new variable of struct dog.
 *
 * @name: A string element of the stuct.
 * @age: A float element of the struct.
 * @owner: Another string element of the struct.
 * Return: A pointer to the new variable.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *thenewdog = malloc(sizeof(dog_t));

	if (thenewdog == NULL)
	{
		return (NULL);
	}
	else
	{
		(*thenewdog).name = name;
		(*thenewdog).age = age;
		(*thenewdog).owner = owner;

		return (thenewdog);
	}
}
