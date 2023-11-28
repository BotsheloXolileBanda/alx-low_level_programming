#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog properties.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: THe name of the owner.
 *
 * Description: A struct with info on a dog.
 */
/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
