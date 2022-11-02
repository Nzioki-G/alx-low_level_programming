#include <stdio.h>

void print_arr(int *arr, size_t start_idx, size_t end_idx);
int recurse_binary(int *array, size_t low, size_t upper, int target);

/**
 * advanced_binary - search for @value in @array
 * @array: array to search through
 * @size: length of @array
 * @value: value to find
 * Return: first index of occurrence of @value, if found, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lower, upper;

	if (!array || !size)
		return (-1);
	lower = 0;
	upper = size - 1;

	return (recurse_binary(array, lower, upper, value));
}

int recurse_binary(int *array, size_t low, size_t upper, int target)
{
	int mid = (low + upper) / 2;

	printf("Searching in array: ");
	print_arr(array, low, upper);

	/* base case: we find a match */
	if (array[mid] == target)
	{
		return (mid);
	}
	/* or loop runs out */
	if (low >= upper)
		return (-1);

	/* recursive case: we don't find a match */
	if (target < array[mid])
		return recurse_binary(array, low, mid - 1, target);
	else
		return recurse_binary(array, mid + 1, upper, target);

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
