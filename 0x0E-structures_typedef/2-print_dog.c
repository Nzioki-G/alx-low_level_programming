#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints struct dog
  * @d: pointer to struct dog
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");

	printf("Age: %f\n", d->age);

	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");

}
