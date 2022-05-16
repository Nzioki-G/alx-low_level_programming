#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - searches for integer
  * @array: integers to search through
  * @size: size of ARRAY
  * @cmp: pointer to function that compares values
  * Return: index of first match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, diff;

	if (!array || !cmp || size <= 0)
		return (-1);

	while (i < size)
	{
		diff = cmp(array[i]);

		/* if cpm returns a positive */
		if (diff)
			return (i);

		i++;
	}

	/* no match found */
	return (-1);
}
