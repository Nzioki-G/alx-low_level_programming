#include "search_algos.h"

/**
 * interpolation_search - searches using Interpolation Search Algorithm
 * @array: list to search through
 * @size: size of @array
 * @value: value to search for
 * Return: index of first occurrence of @value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0;
	high = size - 1;

	if (!array || !size)
		return (-1);

	while (low <= high)
	{
		/* to determine the probe position */
		pos = low +
		(((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);


		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
