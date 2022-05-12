#ifndef DOG_POPPY
#define DOG_POPPY

#include <stdlib.h>

/**
  * struct dog - a structure rep for a simple dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
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

#endif
