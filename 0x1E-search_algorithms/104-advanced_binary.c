#include <stdio.h>

void print_arr(int *arr, size_t start_idx, size_t end_idx);

/**
 * advanced_binary - search for @value in @array
 * @array: array to search through
 * @size: length of @array
 * @value: value to find
 * Return: first index of occurrence of @value, if found, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, lower, mid, upper;

	if (!array || !size)
		return (-1);
	lower = 0;
	upper = size - 1;

	while (lower < upper)
	{
		printf("Searching in array: ");
		print_arr(array, lower, upper);

		mid = (lower + upper) / 2;
		/* when we get a match, loop back to its first occurrence */
		if (array[mid] == value)
		{
			i = mid;
			while (array[i - 1] == value)
				i--;
			return (i);
		}
		else if (array[mid] > value)
			upper = mid - 1;
		else
			lower = mid + 1;
	}
	return (-1);
}


/**
 * print_arr - prints a portion of an array
 * @arr: array to print
 * @start_idx: starting point for print
 * @end_idx: end point of printing
 */
void print_arr(int *arr, size_t start_idx, size_t end_idx)
{
	while (start_idx < end_idx)
	{
		printf("%d, ", arr[start_idx]);
		start_idx++;
	}
	printf("%d\n", arr[start_idx]);
}
