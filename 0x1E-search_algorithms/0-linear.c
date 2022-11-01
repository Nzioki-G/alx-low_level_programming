#include "search_algos.h"

/**
 * linear_search - searches for @value in @array
 * @array: pointer to 1st element of an array
 * @size: the lenght of the array
 * @value: the value to search for
 * Return: the index of @value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* if array is empty or size is 0 */
	if (!array || !size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
