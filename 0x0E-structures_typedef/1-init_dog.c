#include "dog.h"

/**
  * init_dog - Initialises a structure.
  * @d: Pointer to struct.
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Name of owner.
  * Return: No value.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
