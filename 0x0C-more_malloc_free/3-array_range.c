#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: the starting point
  * @max: the end point
  * Return: pointer to this array
  */
int *array_range(int min, int max)
{
	int *ar, i, size;

	if (min > max)
	{
		return (NULL);
	}

	/* allocate mem for ar */
	size = max - min + 1;
	ar = malloc(sizeof(int) * size);

	if (!ar)
	{
		return (NULL);
	}

	/* populate the array */
	for (i = 0; i < size; i++)
	{
		ar[i] = i + min;
	}
	return (ar);
}
