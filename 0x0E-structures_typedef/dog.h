#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A struct for dog info.
  * @name: The name of dog.
  * @age: The age of dog.
  * @owner: The owner name.
  * Description: Name and owner are strings age is float.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
