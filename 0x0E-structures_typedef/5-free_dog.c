#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_dog - Frees a struct variable.
  *
  * @d: pointer to the struct.
  * Return: No value.
  */
void free_dog(dog_t *d)
{
	free(d);
}
