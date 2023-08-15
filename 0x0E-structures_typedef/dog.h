#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A struct called dog that I have defined.
 *
 * @name: The identifier for the animal.
 * @age: A variable of float type for age.
 * @owner: A string type variable for the variable owner.
 * Description: A struct holding information about a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
