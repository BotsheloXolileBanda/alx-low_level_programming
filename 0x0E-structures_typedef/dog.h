#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A struct for dog info.
  * @name: The name of dog.
  * @age: The age of dog.
  * @owner: The owner name.
  * Description: Name and owner are strings age is float.
  */
/**
  * dog_t - Typedef for struct dog.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
