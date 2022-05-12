#ifndef DOG_POPPY
#define DOG_POPPY

#include <stdlib.h>

/**
  * struct dog - a structure rep for a simple dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
