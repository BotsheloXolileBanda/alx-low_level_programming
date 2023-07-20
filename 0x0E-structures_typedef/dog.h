#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A new type for dog infor.
 * @name: Identifier in string.
 * @age: How old dog is.
 * @owner: Name of owner.
 *
 * dog_t - Typedef for struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif