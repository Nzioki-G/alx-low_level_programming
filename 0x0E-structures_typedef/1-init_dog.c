#include "dog.h"

/**
  * init_dog - initializes dog structure
  * @d: pointer to an instance of struct dog
  * @name: this dog's name
  * @age: this dog's age
  * @owner: this dog's owner
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
