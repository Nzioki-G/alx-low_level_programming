#include <stdio.h>

void print_arr(int *arr, size_t start_idx, size_t end_idx);

/**
 * binary_search - search for @value in @array
 * @array: array to search through
 * @size: length of @array
 * @value: value to find
 * Return: value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, len;

	if (!array)
		return (-1);

	while (start <= end && end <= size)
	{
		printf("Searching in array: ");
		print_arr(array, start, end);

		len = end + start; /* length of remaining portion of array */
		mid = len / 2;     /* midpoint of remaining array */

		if (value < array[mid]) /* if val is on left, ignore right */
			end = mid - 1;
		else if (value > array[mid]) /* val on right? ignore left */
			start = mid + 1;
		else /* if we have our value, return it */
			return (value);
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
