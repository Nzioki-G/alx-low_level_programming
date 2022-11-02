#include "search_algos.h"

/**
 * exponential_search - searches using Exponential Search Algorithm
 * @array: list to search through
 * @size: size of @array
 * @value: value to search for
 * Return: index of first occurrence of @value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, lower, mid, upper, i;

	if (!array || !size)
		return (-1);

	/* get the bounds of @array to search within */
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	/* use binary_search to find @value in this portion of @array */
	lower = bound / 2;
	upper = (bound + 1 < size) ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
	while (lower <= upper)
	{
		mid = (lower + upper) / 2;

		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lower = mid + 1;
		else
			upper = mid - 1;
	}
	return (-1);
}
