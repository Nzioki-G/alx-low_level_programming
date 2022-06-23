#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new instance of struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: pointer to new dog if successful otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d = malloc(sizeof(dog_t));
	if (d)
	{
		d->name = strdup(name); /* set name */
		if (d->name == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->age = age; /* set age */
		d->owner = strdup(owner); /* set owner */
		if (d->owner == NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
			return (NULL);
		}
		return (d);
	}

	free(d);
	return (NULL);
}
