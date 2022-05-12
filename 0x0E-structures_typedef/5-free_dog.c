#include "dog.h"

/**
  * free_dog - frees struct dog(s)
  * @d: pointer to the dog instance to free
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
