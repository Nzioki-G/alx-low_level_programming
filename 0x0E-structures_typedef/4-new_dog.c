#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - cretes a new instance of struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
