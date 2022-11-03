#include "search_algos.h"

/**
 * jump_search - searches for @value in @array using Jump Search Algorithm
 * @array: list to search through
 * @size: size of @array
 * @value: value to search for
 * Return: index of first occurrence of @value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, next;

	if (!array || !size)
		return (-1);

	i = 0;
	jump = sqrt(size);

	/* jumpy traverse */
	while (i < size)
	{
		next = i + jump;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* found val at this idx? */
		if (array[i] == value)
			return (i);

		/* found element's subarray? next jump exceeds bounds? */
		if ((array[i] < value && array[next] >= value) || next >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, next);
			break;
		}

		/* default at each iteration */
		i += jump;
	}

	/* linear traverse */
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
