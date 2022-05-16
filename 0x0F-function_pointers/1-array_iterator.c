#include "function_pointers.h"

/**
  * array_iterator - executes ACTION on ech elemnt of ARRAY
  * @array: array of elemnts to pass to ACTION
  * @size: length of ARRAY
  * @action: function to call
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (!action || !array)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
