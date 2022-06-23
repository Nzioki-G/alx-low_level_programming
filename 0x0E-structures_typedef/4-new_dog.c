#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - cretes a new instance of struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: pointer to new dog if successful otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *nm, *own;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	nm = (name) ? strdup(name) : NULL;
	own = (owner) ? strdup(owner) : NULL;

	d->name = nm;
	d->age = age;
	d->owner = own;
	return (d);
}
