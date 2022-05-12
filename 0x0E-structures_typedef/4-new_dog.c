#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - cretes a new instance of struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: pointer to new dog if successful otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *nm, *own;

	nm = name;
	own = owner;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = nm;
	doggy->age = age;
	doggy->owner = own;
	return (doggy);
}
